{ Parsed from SceneKit.framework (MacOSX10.10) SCNBoundingVolume.h }
{ Created on Sun Mar 8 1:46:53 2015 }


{$ifdef TYPES}
type
  SCNBoundingVolumeProtocolPtr = ^SCNBoundingVolumeProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  SCNBoundingVolumeProtocol = objcprotocol external name 'SCNBoundingVolume' (NSObjectProtocol)
  required
    function getBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr): boolean; message 'getBoundingBoxMin:max:';
    function getBoundingSphereCenter_radius (center: SCNVector3Ptr; radius: CGFloatPtr): boolean; message 'getBoundingSphereCenter:radius:';
    procedure setBoundingBoxMin_max (min: SCNVector3Ptr; max: SCNVector3Ptr); message 'setBoundingBoxMin:max:'; { available in 10_9, 8_0 }
  end;
{$endif}
