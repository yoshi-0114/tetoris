#pragma option push -b -a8 -pc -A- /*P_O_Push*/
// Copyright (C) Microsoft Corporation, 1990-1999
#if _MSC_VER > 1000
#pragma once
#endif

/*
 * recguids.h - OLE reconciliation interface GUID definitions.
 */


/* GUIDs
 ********/

DEFINE_GUID(IID_IReconcileInitiator, 0x99180161L, 0xDA16, 0x101A, 0x93, 0x5C, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
DEFINE_GUID(IID_IReconcilableObject, 0x99180162L, 0xDA16, 0x101A, 0x93, 0x5C, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
DEFINE_GUID(IID_INotifyReplica,      0x99180163L, 0xDA16, 0x101A, 0x93, 0x5C, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
DEFINE_GUID(IID_IBriefcaseInitiator, 0x99180164L, 0xDA16, 0x101A, 0x93, 0x5C, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);

#pragma option pop /*P_O_Pop*/
