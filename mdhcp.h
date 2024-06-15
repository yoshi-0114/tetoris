#pragma option push -b -a8 -pc -A- /*P_O_Push*/

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0279 */
/* at Sat Jul 31 00:53:08 1999
 */
/* Compiler settings for mdhcp.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32 (32b run), ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __mdhcp_h__
#define __mdhcp_h__

/* Forward Declarations */ 

#ifndef __IMcastScope_FWD_DEFINED__
#define __IMcastScope_FWD_DEFINED__
typedef interface IMcastScope IMcastScope;
#endif 	/* __IMcastScope_FWD_DEFINED__ */


#ifndef __IMcastLeaseInfo_FWD_DEFINED__
#define __IMcastLeaseInfo_FWD_DEFINED__
typedef interface IMcastLeaseInfo IMcastLeaseInfo;
#endif 	/* __IMcastLeaseInfo_FWD_DEFINED__ */


#ifndef __IEnumMcastScope_FWD_DEFINED__
#define __IEnumMcastScope_FWD_DEFINED__
typedef interface IEnumMcastScope IEnumMcastScope;
#endif 	/* __IEnumMcastScope_FWD_DEFINED__ */


#ifndef __IMcastAddressAllocation_FWD_DEFINED__
#define __IMcastAddressAllocation_FWD_DEFINED__
typedef interface IMcastAddressAllocation IMcastAddressAllocation;
#endif 	/* __IMcastAddressAllocation_FWD_DEFINED__ */


#ifndef __IMcastScope_FWD_DEFINED__
#define __IMcastScope_FWD_DEFINED__
typedef interface IMcastScope IMcastScope;
#endif 	/* __IMcastScope_FWD_DEFINED__ */


#ifndef __IMcastLeaseInfo_FWD_DEFINED__
#define __IMcastLeaseInfo_FWD_DEFINED__
typedef interface IMcastLeaseInfo IMcastLeaseInfo;
#endif 	/* __IMcastLeaseInfo_FWD_DEFINED__ */


#ifndef __IEnumMcastScope_FWD_DEFINED__
#define __IEnumMcastScope_FWD_DEFINED__
typedef interface IEnumMcastScope IEnumMcastScope;
#endif 	/* __IEnumMcastScope_FWD_DEFINED__ */


#ifndef __IMcastAddressAllocation_FWD_DEFINED__
#define __IMcastAddressAllocation_FWD_DEFINED__
typedef interface IMcastAddressAllocation IMcastAddressAllocation;
#endif 	/* __IMcastAddressAllocation_FWD_DEFINED__ */


#ifndef __McastAddressAllocation_FWD_DEFINED__
#define __McastAddressAllocation_FWD_DEFINED__

#ifdef __cplusplus
typedef class McastAddressAllocation McastAddressAllocation;
#else
typedef struct McastAddressAllocation McastAddressAllocation;
#endif /* __cplusplus */

#endif 	/* __McastAddressAllocation_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "tapi3if.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_mdhcp_0000 */
/* [local] */ 

/* Copyright (c) 1998-1999  Microsoft Corporation  */


extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mdhcp_0000_v0_0_s_ifspec;

#ifndef __IMcastScope_INTERFACE_DEFINED__
#define __IMcastScope_INTERFACE_DEFINED__

/* interface IMcastScope */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMcastScope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF0DAEF4-A289-11D1-8697-006008B0E5D2")
    IMcastScope : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScopeID( 
            /* [retval][out] */ long __RPC_FAR *pID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerID( 
            /* [retval][out] */ long __RPC_FAR *pID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InterfaceID( 
            /* [retval][out] */ long __RPC_FAR *pID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ScopeDescription( 
            /* [retval][out] */ BSTR __RPC_FAR *ppDescription) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TTL( 
            /* [retval][out] */ long __RPC_FAR *pTTL) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMcastScopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMcastScope __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMcastScope __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMcastScope __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMcastScope __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMcastScope __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMcastScope __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMcastScope __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ScopeID )( 
            IMcastScope __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServerID )( 
            IMcastScope __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_InterfaceID )( 
            IMcastScope __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ScopeDescription )( 
            IMcastScope __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *ppDescription);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TTL )( 
            IMcastScope __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pTTL);
        
        END_INTERFACE
    } IMcastScopeVtbl;

    interface IMcastScope
    {
        CONST_VTBL struct IMcastScopeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMcastScope_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMcastScope_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMcastScope_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMcastScope_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMcastScope_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMcastScope_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMcastScope_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMcastScope_get_ScopeID(This,pID)	\
    (This)->lpVtbl -> get_ScopeID(This,pID)

#define IMcastScope_get_ServerID(This,pID)	\
    (This)->lpVtbl -> get_ServerID(This,pID)

#define IMcastScope_get_InterfaceID(This,pID)	\
    (This)->lpVtbl -> get_InterfaceID(This,pID)

#define IMcastScope_get_ScopeDescription(This,ppDescription)	\
    (This)->lpVtbl -> get_ScopeDescription(This,ppDescription)

#define IMcastScope_get_TTL(This,pTTL)	\
    (This)->lpVtbl -> get_TTL(This,pTTL)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastScope_get_ScopeID_Proxy( 
    IMcastScope __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pID);


void __RPC_STUB IMcastScope_get_ScopeID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastScope_get_ServerID_Proxy( 
    IMcastScope __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pID);


void __RPC_STUB IMcastScope_get_ServerID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastScope_get_InterfaceID_Proxy( 
    IMcastScope __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pID);


void __RPC_STUB IMcastScope_get_InterfaceID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastScope_get_ScopeDescription_Proxy( 
    IMcastScope __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *ppDescription);


void __RPC_STUB IMcastScope_get_ScopeDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastScope_get_TTL_Proxy( 
    IMcastScope __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pTTL);


void __RPC_STUB IMcastScope_get_TTL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMcastScope_INTERFACE_DEFINED__ */


#ifndef __IMcastLeaseInfo_INTERFACE_DEFINED__
#define __IMcastLeaseInfo_INTERFACE_DEFINED__

/* interface IMcastLeaseInfo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMcastLeaseInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF0DAEFD-A289-11D1-8697-006008B0E5D2")
    IMcastLeaseInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RequestID( 
            /* [retval][out] */ BSTR __RPC_FAR *ppRequestID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeaseStartTime( 
            /* [retval][out] */ DATE __RPC_FAR *pTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LeaseStartTime( 
            /* [in] */ DATE time) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LeaseStopTime( 
            /* [retval][out] */ DATE __RPC_FAR *pTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LeaseStopTime( 
            /* [in] */ DATE time) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AddressCount( 
            /* [retval][out] */ long __RPC_FAR *pCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerAddress( 
            /* [retval][out] */ BSTR __RPC_FAR *ppAddress) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TTL( 
            /* [retval][out] */ long __RPC_FAR *pTTL) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Addresses( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVariant) = 0;
        
        virtual /* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE EnumerateAddresses( 
            /* [retval][out] */ IEnumBstr __RPC_FAR *__RPC_FAR *ppEnumAddresses) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMcastLeaseInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMcastLeaseInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMcastLeaseInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_RequestID )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *ppRequestID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LeaseStartTime )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *pTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LeaseStartTime )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ DATE time);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LeaseStopTime )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ DATE __RPC_FAR *pTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *put_LeaseStopTime )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [in] */ DATE time);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_AddressCount )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ServerAddress )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ BSTR __RPC_FAR *ppAddress);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_TTL )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pTTL);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Addresses )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariant);
        
        /* [helpstring][hidden][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumerateAddresses )( 
            IMcastLeaseInfo __RPC_FAR * This,
            /* [retval][out] */ IEnumBstr __RPC_FAR *__RPC_FAR *ppEnumAddresses);
        
        END_INTERFACE
    } IMcastLeaseInfoVtbl;

    interface IMcastLeaseInfo
    {
        CONST_VTBL struct IMcastLeaseInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMcastLeaseInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMcastLeaseInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMcastLeaseInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMcastLeaseInfo_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMcastLeaseInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMcastLeaseInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMcastLeaseInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMcastLeaseInfo_get_RequestID(This,ppRequestID)	\
    (This)->lpVtbl -> get_RequestID(This,ppRequestID)

#define IMcastLeaseInfo_get_LeaseStartTime(This,pTime)	\
    (This)->lpVtbl -> get_LeaseStartTime(This,pTime)

#define IMcastLeaseInfo_put_LeaseStartTime(This,time)	\
    (This)->lpVtbl -> put_LeaseStartTime(This,time)

#define IMcastLeaseInfo_get_LeaseStopTime(This,pTime)	\
    (This)->lpVtbl -> get_LeaseStopTime(This,pTime)

#define IMcastLeaseInfo_put_LeaseStopTime(This,time)	\
    (This)->lpVtbl -> put_LeaseStopTime(This,time)

#define IMcastLeaseInfo_get_AddressCount(This,pCount)	\
    (This)->lpVtbl -> get_AddressCount(This,pCount)

#define IMcastLeaseInfo_get_ServerAddress(This,ppAddress)	\
    (This)->lpVtbl -> get_ServerAddress(This,ppAddress)

#define IMcastLeaseInfo_get_TTL(This,pTTL)	\
    (This)->lpVtbl -> get_TTL(This,pTTL)

#define IMcastLeaseInfo_get_Addresses(This,pVariant)	\
    (This)->lpVtbl -> get_Addresses(This,pVariant)

#define IMcastLeaseInfo_EnumerateAddresses(This,ppEnumAddresses)	\
    (This)->lpVtbl -> EnumerateAddresses(This,ppEnumAddresses)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_RequestID_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *ppRequestID);


void __RPC_STUB IMcastLeaseInfo_get_RequestID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_LeaseStartTime_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *pTime);


void __RPC_STUB IMcastLeaseInfo_get_LeaseStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_put_LeaseStartTime_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [in] */ DATE time);


void __RPC_STUB IMcastLeaseInfo_put_LeaseStartTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_LeaseStopTime_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ DATE __RPC_FAR *pTime);


void __RPC_STUB IMcastLeaseInfo_get_LeaseStopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_put_LeaseStopTime_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [in] */ DATE time);


void __RPC_STUB IMcastLeaseInfo_put_LeaseStopTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_AddressCount_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pCount);


void __RPC_STUB IMcastLeaseInfo_get_AddressCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_ServerAddress_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ BSTR __RPC_FAR *ppAddress);


void __RPC_STUB IMcastLeaseInfo_get_ServerAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_TTL_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pTTL);


void __RPC_STUB IMcastLeaseInfo_get_TTL_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_get_Addresses_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVariant);


void __RPC_STUB IMcastLeaseInfo_get_Addresses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE IMcastLeaseInfo_EnumerateAddresses_Proxy( 
    IMcastLeaseInfo __RPC_FAR * This,
    /* [retval][out] */ IEnumBstr __RPC_FAR *__RPC_FAR *ppEnumAddresses);


void __RPC_STUB IMcastLeaseInfo_EnumerateAddresses_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMcastLeaseInfo_INTERFACE_DEFINED__ */


#ifndef __IEnumMcastScope_INTERFACE_DEFINED__
#define __IEnumMcastScope_INTERFACE_DEFINED__

/* interface IEnumMcastScope */
/* [unique][helpstring][hidden][uuid][object] */ 


EXTERN_C const IID IID_IEnumMcastScope;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF0DAF09-A289-11D1-8697-006008B0E5D2")
    IEnumMcastScope : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG celt,
            /* [out] */ IMcastScope __RPC_FAR *__RPC_FAR *ppScopes,
            /* [full][out][in] */ ULONG __RPC_FAR *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [retval][out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnum) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IEnumMcastScopeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IEnumMcastScope __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IEnumMcastScope __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IEnumMcastScope __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )( 
            IEnumMcastScope __RPC_FAR * This,
            /* [in] */ ULONG celt,
            /* [out] */ IMcastScope __RPC_FAR *__RPC_FAR *ppScopes,
            /* [full][out][in] */ ULONG __RPC_FAR *pceltFetched);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )( 
            IEnumMcastScope __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )( 
            IEnumMcastScope __RPC_FAR * This,
            /* [in] */ ULONG celt);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )( 
            IEnumMcastScope __RPC_FAR * This,
            /* [retval][out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnum);
        
        END_INTERFACE
    } IEnumMcastScopeVtbl;

    interface IEnumMcastScope
    {
        CONST_VTBL struct IEnumMcastScopeVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumMcastScope_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IEnumMcastScope_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IEnumMcastScope_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IEnumMcastScope_Next(This,celt,ppScopes,pceltFetched)	\
    (This)->lpVtbl -> Next(This,celt,ppScopes,pceltFetched)

#define IEnumMcastScope_Reset(This)	\
    (This)->lpVtbl -> Reset(This)

#define IEnumMcastScope_Skip(This,celt)	\
    (This)->lpVtbl -> Skip(This,celt)

#define IEnumMcastScope_Clone(This,ppEnum)	\
    (This)->lpVtbl -> Clone(This,ppEnum)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IEnumMcastScope_Next_Proxy( 
    IEnumMcastScope __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [out] */ IMcastScope __RPC_FAR *__RPC_FAR *ppScopes,
    /* [full][out][in] */ ULONG __RPC_FAR *pceltFetched);


void __RPC_STUB IEnumMcastScope_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumMcastScope_Reset_Proxy( 
    IEnumMcastScope __RPC_FAR * This);


void __RPC_STUB IEnumMcastScope_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumMcastScope_Skip_Proxy( 
    IEnumMcastScope __RPC_FAR * This,
    /* [in] */ ULONG celt);


void __RPC_STUB IEnumMcastScope_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IEnumMcastScope_Clone_Proxy( 
    IEnumMcastScope __RPC_FAR * This,
    /* [retval][out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnum);


void __RPC_STUB IEnumMcastScope_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IEnumMcastScope_INTERFACE_DEFINED__ */


#ifndef __IMcastAddressAllocation_INTERFACE_DEFINED__
#define __IMcastAddressAllocation_INTERFACE_DEFINED__

/* interface IMcastAddressAllocation */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IMcastAddressAllocation;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DF0DAEF1-A289-11D1-8697-006008B0E5D2")
    IMcastAddressAllocation : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Scopes( 
            /* [retval][out] */ VARIANT __RPC_FAR *pVariant) = 0;
        
        virtual /* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE EnumerateScopes( 
            /* [out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnumMcastScope) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RequestAddress( 
            /* [in] */ IMcastScope __RPC_FAR *pScope,
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ long NumAddresses,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppLeaseResponse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RenewAddress( 
            /* [in] */ long lReserved,
            /* [in] */ IMcastLeaseInfo __RPC_FAR *pRenewRequest,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppRenewResponse) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseAddress( 
            /* [in] */ IMcastLeaseInfo __RPC_FAR *pReleaseRequest) = 0;
        
        virtual /* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE CreateLeaseInfo( 
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ DWORD dwNumAddresses,
            /* [in] */ LPWSTR __RPC_FAR *ppAddresses,
            /* [in] */ LPWSTR pRequestID,
            /* [in] */ LPWSTR pServerAddress,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateLeaseInfoFromVariant( 
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ VARIANT vAddresses,
            /* [in] */ BSTR pRequestID,
            /* [in] */ BSTR pServerAddress,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IMcastAddressAllocationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IMcastAddressAllocation __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IMcastAddressAllocation __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Scopes )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [retval][out] */ VARIANT __RPC_FAR *pVariant);
        
        /* [helpstring][hidden][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *EnumerateScopes )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnumMcastScope);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RequestAddress )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ IMcastScope __RPC_FAR *pScope,
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ long NumAddresses,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppLeaseResponse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RenewAddress )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ long lReserved,
            /* [in] */ IMcastLeaseInfo __RPC_FAR *pRenewRequest,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppRenewResponse);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReleaseAddress )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ IMcastLeaseInfo __RPC_FAR *pReleaseRequest);
        
        /* [helpstring][hidden][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateLeaseInfo )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ DWORD dwNumAddresses,
            /* [in] */ LPWSTR __RPC_FAR *ppAddresses,
            /* [in] */ LPWSTR pRequestID,
            /* [in] */ LPWSTR pServerAddress,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateLeaseInfoFromVariant )( 
            IMcastAddressAllocation __RPC_FAR * This,
            /* [in] */ DATE LeaseStartTime,
            /* [in] */ DATE LeaseStopTime,
            /* [in] */ VARIANT vAddresses,
            /* [in] */ BSTR pRequestID,
            /* [in] */ BSTR pServerAddress,
            /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest);
        
        END_INTERFACE
    } IMcastAddressAllocationVtbl;

    interface IMcastAddressAllocation
    {
        CONST_VTBL struct IMcastAddressAllocationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMcastAddressAllocation_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IMcastAddressAllocation_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IMcastAddressAllocation_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IMcastAddressAllocation_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IMcastAddressAllocation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IMcastAddressAllocation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IMcastAddressAllocation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IMcastAddressAllocation_get_Scopes(This,pVariant)	\
    (This)->lpVtbl -> get_Scopes(This,pVariant)

#define IMcastAddressAllocation_EnumerateScopes(This,ppEnumMcastScope)	\
    (This)->lpVtbl -> EnumerateScopes(This,ppEnumMcastScope)

#define IMcastAddressAllocation_RequestAddress(This,pScope,LeaseStartTime,LeaseStopTime,NumAddresses,ppLeaseResponse)	\
    (This)->lpVtbl -> RequestAddress(This,pScope,LeaseStartTime,LeaseStopTime,NumAddresses,ppLeaseResponse)

#define IMcastAddressAllocation_RenewAddress(This,lReserved,pRenewRequest,ppRenewResponse)	\
    (This)->lpVtbl -> RenewAddress(This,lReserved,pRenewRequest,ppRenewResponse)

#define IMcastAddressAllocation_ReleaseAddress(This,pReleaseRequest)	\
    (This)->lpVtbl -> ReleaseAddress(This,pReleaseRequest)

#define IMcastAddressAllocation_CreateLeaseInfo(This,LeaseStartTime,LeaseStopTime,dwNumAddresses,ppAddresses,pRequestID,pServerAddress,ppReleaseRequest)	\
    (This)->lpVtbl -> CreateLeaseInfo(This,LeaseStartTime,LeaseStopTime,dwNumAddresses,ppAddresses,pRequestID,pServerAddress,ppReleaseRequest)

#define IMcastAddressAllocation_CreateLeaseInfoFromVariant(This,LeaseStartTime,LeaseStopTime,vAddresses,pRequestID,pServerAddress,ppReleaseRequest)	\
    (This)->lpVtbl -> CreateLeaseInfoFromVariant(This,LeaseStartTime,LeaseStopTime,vAddresses,pRequestID,pServerAddress,ppReleaseRequest)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_get_Scopes_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [retval][out] */ VARIANT __RPC_FAR *pVariant);


void __RPC_STUB IMcastAddressAllocation_get_Scopes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_EnumerateScopes_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [out] */ IEnumMcastScope __RPC_FAR *__RPC_FAR *ppEnumMcastScope);


void __RPC_STUB IMcastAddressAllocation_EnumerateScopes_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_RequestAddress_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [in] */ IMcastScope __RPC_FAR *pScope,
    /* [in] */ DATE LeaseStartTime,
    /* [in] */ DATE LeaseStopTime,
    /* [in] */ long NumAddresses,
    /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppLeaseResponse);


void __RPC_STUB IMcastAddressAllocation_RequestAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_RenewAddress_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [in] */ long lReserved,
    /* [in] */ IMcastLeaseInfo __RPC_FAR *pRenewRequest,
    /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppRenewResponse);


void __RPC_STUB IMcastAddressAllocation_RenewAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_ReleaseAddress_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [in] */ IMcastLeaseInfo __RPC_FAR *pReleaseRequest);


void __RPC_STUB IMcastAddressAllocation_ReleaseAddress_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][hidden][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_CreateLeaseInfo_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [in] */ DATE LeaseStartTime,
    /* [in] */ DATE LeaseStopTime,
    /* [in] */ DWORD dwNumAddresses,
    /* [in] */ LPWSTR __RPC_FAR *ppAddresses,
    /* [in] */ LPWSTR pRequestID,
    /* [in] */ LPWSTR pServerAddress,
    /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest);


void __RPC_STUB IMcastAddressAllocation_CreateLeaseInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IMcastAddressAllocation_CreateLeaseInfoFromVariant_Proxy( 
    IMcastAddressAllocation __RPC_FAR * This,
    /* [in] */ DATE LeaseStartTime,
    /* [in] */ DATE LeaseStopTime,
    /* [in] */ VARIANT vAddresses,
    /* [in] */ BSTR pRequestID,
    /* [in] */ BSTR pServerAddress,
    /* [retval][out] */ IMcastLeaseInfo __RPC_FAR *__RPC_FAR *ppReleaseRequest);


void __RPC_STUB IMcastAddressAllocation_CreateLeaseInfoFromVariant_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IMcastAddressAllocation_INTERFACE_DEFINED__ */



#ifndef __McastLib_LIBRARY_DEFINED__
#define __McastLib_LIBRARY_DEFINED__

/* library McastLib */
/* [helpstring][version][uuid] */ 







EXTERN_C const IID LIBID_McastLib;

EXTERN_C const CLSID CLSID_McastAddressAllocation;

#ifdef __cplusplus

class DECLSPEC_UUID("DF0DAEF2-A289-11D1-8697-006008B0E5D2")
McastAddressAllocation;
#endif
#endif /* __McastLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  VARIANT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, VARIANT __RPC_FAR * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long __RPC_FAR *, VARIANT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


#pragma option pop /*P_O_Pop*/
