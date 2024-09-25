# Setting the width of the dropdown list

A simple tutorial explaining how to set the width of a combo dropdown list so that all items are fully visible



![Sample Image - ComboDropWidth.gif](https://raw.githubusercontent.com/ChrisMaunder/combodropwidth/master/docs/assets/ComboDropWidth.gif)

## Introduction

One of the more frustrating aspects of a user interface can be the situation where
you are presented with a list of choices in a combobox, but are unable to view the
choices because the dropdown list is too narrow.

This article presents an extremely simple `CCombobox` derived class
that will always present a list that is wide enough to hold the widest string.

## A new class

To start we use the ClassWizard to create a new class `CMyComboBox`
derived from `CComboBox`.

![Creating a new class](https://raw.githubusercontent.com/ChrisMaunder/combodropwidth/master/docs/assets/ComboDropWidth1.gif)

Then use the class wizard to add an override for the reflected message CBN\_DROPDOWN.
A reflected message is a message that the control sends to its parent, but which the
parent lets the control have a chance at processing first. The "=" before the CBN\_DROPDOWN
in the ClassWizard indicates it's a reflected message.

![Adding a message handler](https://raw.githubusercontent.com/ChrisMaunder/combodropwidth/master/docs/assets/ComboDropWidth2.gif)

Call the message handler `OnDropDown` and add the following code

```cpp
void CMyComboBox::OnDropdown() 
{
    RecalcDropWidth();
}
```

Then add the function `RecalcDropWidth` to your `CMyComboBox`. What
we are doing is that each time the combo displays it's drop down, we are intercepting the
message and calling a function to quickly check and the size of the control's dropdown
before it gets a chance to display it. 

The code for `RecalcDropWidth` is as follows

```cpp
void CMyComboBox::RecalcDropWidth()
{
    // Reset the dropped width
    int nNumEntries = GetCount();
    int nWidth = 0;
    CString str;

    CClientDC dc(this);
    int nSave = dc.SaveDC();
    dc.SelectObject(GetFont());

    int nScrollWidth = ::GetSystemMetrics(SM_CXVSCROLL);
    for (int i = 0; i < nNumEntries; i++)
    {
        GetLBText(i, str);
        int nLength = dc.GetTextExtent(str).cx + nScrollWidth;
        nWidth = max(nWidth, nLength);
    }
    
    // Add margin space to the calculations
    nWidth += dc.GetTextExtent("0").cx;

    dc.RestoreDC(nSave);
    SetDroppedWidth(nWidth);
}
```

Thanks to Eugeny Berezkin for pointing out that the combo draws its dropdown list with a 
small margin.

Essentially what we are doing is getting a device context that we can use to calculate
the size of each string to be displayed in the combo. We then ensure that we are performing
these calculations with the correct font, and then iterate through the list and work out
the maximum width. We then add a small margin to replicate the on-screen behaviour of the
drop down. Once that is done we call `CComboBox::SetDroppedWidth` to set the
new width.

## Using the new class

So - we now have a class that does what we want - but how do we use it?

Simple. `CMyComboBox` is a drop-in replacement for  `CComboBox`.
Simply include the  **MyComboBox.h** header file where appropriate, and change your
combobox's class from  `CComboBox` to `CMyComboBox`.

Alternatively, you can use the ClassWizard to associate a variable with your combobox.
Go to the Member Variables tab in ClassWizard and select the Form or Dialog class that
contains your combobox control. Choose "Add Variable...", specify a name, set the Category
as "Control" and then set the variable type as `CMyComboBox`.

![Subclassing the control](https://raw.githubusercontent.com/ChrisMaunder/combodropwidth/master/docs/assets/ComboDropWidth3.gif)

If you used the  **MyComboBox** files from the download files for this article and
simply included them in your project without rebuilding the class file (delete the .clw
file from your directory and hit Ctrl+W) then `CMyComboBox` may not appear
in the list of available combobox classes. If this happens simply choose `CComboBox`
and then go into your Form or Dialogs header file and manually change `CComboBox`
to `CMyComboBox`.
