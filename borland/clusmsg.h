/*++

Copyright (c) 1991-1996  Microsoft Corporation

Module Name:

    clusmsg.h

Abstract:

    This file contains the message definitions for the cluster service.

Author:

    davidp 19-Sep-1996

Revision History:

Notes:


--*/



#ifndef _CLUSMSG_H_
#pragma option push -b -a8 -pc -A- /*P_O_Push*/
#define _CLUSMSG_H_

/*
 5034 is NOT free
 The next starting point is 5090 (5035 TO 5089 is used)
*/
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//


//
// MessageId: CLUSTER_BUILD_PLACEHOLDER
//
// MessageText:
//
//  With no messages, build will continously try to rebuild clusmsg.h which causes
//  all sorts of things to get rebuilt.
//
#define CLUSTER_BUILD_PLACEHOLDER        59999L

#pragma option pop /*P_O_Pop*/
#endif // _CLUSMSG_H_
