{ Parsed from AddressBook.framework (MacOSX10.10) ABRecord.h }
{ Created on Sun Mar 8 1:47:29 2015 }


{$ifdef TYPES}
type
  ABRecordPtr = ^ABRecord;
{$endif}

{$ifdef CLASSES}

type
  ABRecord = objcclass external (NSObject)
  private
    _databaseImpl: id;
    _reserved1: id;
    _reserved2: id;
    _reserved3: id;
  public
    function init: id; message 'init';
    function initWithAddressBook (addressBook: ABAddressBook): id; message 'initWithAddressBook:';
    function valueForProperty (property_: NSString): id; message 'valueForProperty:';
    function setValue_forProperty_error (value: id; property_: NSString; error: NSErrorPtr): boolean; message 'setValue:forProperty:error:';
    function setValue_forProperty (value: id; property_: NSString): boolean; message 'setValue:forProperty:';
    function removeValueForProperty (property_: NSString): boolean; message 'removeValueForProperty:';
    function isReadOnly: boolean; message 'isReadOnly';
  end;


type
  ABRecord_Convenience = objccategory external (ABRecord)
    function uniqueId: NSString; message 'uniqueId';
    function displayName: NSString; message 'displayName';
  end;
{$endif}
