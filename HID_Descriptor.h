// C:\AVR\Neue Versuche\29032010_USB_IR_Remote_Receiver_with_Irmp - Debug\HID_Descriptor.h


char ReportDescriptor[98] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x0b, 0x01, 0x00, 0x00, 0xff,  // USAGE (Vendor Defined Page 1:Vendor Usage 1)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x26, 0xff, 0x00,              //   LOGICAL_MAXIMUM (255)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x85, 0x01,                    //   REPORT_ID (1)
    0x95, 0x06,                    //   REPORT_COUNT (6)
    0x09, 0x00,                    //   USAGE (Undefined)
    0x82, 0x00, 0x01,              //   INPUT (Data,Ary,Abs,Buf)
    0x85, 0x02,                    //   REPORT_ID (2)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x03,                    //   REPORT_ID (3)
    0x95, 0x06,                    //   REPORT_COUNT (6)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x04,                    //   REPORT_ID (4)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x05,                    //   REPORT_ID (5)
    0x95, 0x06,                    //   REPORT_COUNT (6)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x06,                    //   REPORT_ID (6)
    0x95, 0x02,                    //   REPORT_COUNT (2)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x07,                    //   REPORT_ID (7)
    0x95, 0x04,                    //   REPORT_COUNT (4)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x08,                    //   REPORT_ID (8)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x09, 0x00,                    //   USAGE (Undefined)
    0xb2, 0x02, 0x01,              //   FEATURE (Data,Var,Abs,Buf)
    0x85, 0x09,                    //   REPORT_ID (9)
    0x95, 0x08,                    //   REPORT_COUNT (8)
    0x09, 0x00,                    //   USAGE (Undefined)
    0x82, 0x00, 0x01,              //   INPUT (Data,Ary,Abs,Buf)
    0xc0                           // END_COLLECTION
};

