/*
 *  EDKGUID.H
 *
 *  Microsoft Exchange Messaging Service
 *  Copyright (C) 1986-1996, Microsoft Corporation
 *  
 *  Contains declarations of GUID's for additional interfaces
 *  offered by Microsoft Exchange Messaging Service.
 */

#ifndef EDKGUID_INCLUDED
#pragma option push -b -a8 -pc -A- /*P_O_Push*/
#define EDKGUID_INCLUDED

DEFINE_GUID(IID_IExchangeManageStore, 0x559d10b0,0xa772,0x11cd,0x9b,0xc8,0x00,0xaa,0x00,0x2f,0xc4,0x5a);
DEFINE_GUID(IID_IExchangeModifyTable, 0x2d734cb0,0x53fd,0x101b,0xb1,0x9d,0x08,0x00,0x2b,0x30,0x56,0xe3);
DEFINE_GUID(IID_IExchangeRuleAction,  0x74bba840,0xc93a,0x11ce,0x95,0x81,0x00,0xaa,0x00,0x57,0x42,0xf7);
DEFINE_GUID(IID_IExchangeFastTransfer, 0xff7db070,0xa88a,0x11cd,0x9b,0xc8,0x00,0xaa,0x00,0x2f,0xc4,0x5a);

DEFINE_GUID(IID_IExchangeExportChanges, 0xa3ea9cc0,0xd1b2,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);
DEFINE_GUID(IID_IExchangeImportHierarchyChanges, 0x85a66cf0,0xd0e0,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);
DEFINE_GUID(IID_IExchangeImportContentsChanges, 0xf75abfa0,0xd0e0,0x11cd,0x80,0xfc,0x00,0xaa,0x00,0x4b,0xba,0x0b);

DEFINE_GUID(IID_IExchangeFavorites, 0xcf4f3bc0,0xec66,0x11ce,0xb3,0x1c,0x00,0xaa,0x00,0x57,0x4c,0xc6);

/*
	The following interface GUID is the start of a range of IID's
	Each IID specifies a different CPID.  The IID corresponding to
	cpid 932 would be defined by 
		DEFINE_GUID(IID_IExchangeMessageCpid0, 932, 0x1ae9, 0x11cf,	0x84, 0xe0, 0x00, 0xaa, 0x00, 0x6b, 04f, 0xae);  
*/

DEFINE_GUID(IID_IExchangeMessageCpid0, 0x0, 0x1ae9,0x11cf, 0x84, 0xe0, 0x00, 0xaa, 0x00, 0x6b, 0x4f, 0xae);  

#pragma option pop /*P_O_Pop*/
#endif  //EDKGUID_INCLUDED
