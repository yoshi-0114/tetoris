#pragma option push -b -a8 -pc -A- /*P_O_Push*/

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 5.03.0266 */
/* at Thu May 27 02:10:51 1999
 */
/* Compiler settings for oledbdep.idl:
    Oicf (OptLev=i2), W1, Zp2, env=Win32 (32b run), ms_ext, c_ext
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

#ifndef __oledbdep_h__
#define __oledbdep_h__


#ifndef GUID_DEFS_ONLY

/* Forward Declarations */ 

#ifndef __IRowsetNextRowset_FWD_DEFINED__
#define __IRowsetNextRowset_FWD_DEFINED__
typedef interface IRowsetNextRowset IRowsetNextRowset;
#endif 	/* __IRowsetNextRowset_FWD_DEFINED__ */


#ifndef __IRowsetNewRowAfter_FWD_DEFINED__
#define __IRowsetNewRowAfter_FWD_DEFINED__
typedef interface IRowsetNewRowAfter IRowsetNewRowAfter;
#endif 	/* __IRowsetNewRowAfter_FWD_DEFINED__ */


#ifndef __IRowsetWithParameters_FWD_DEFINED__
#define __IRowsetWithParameters_FWD_DEFINED__
typedef interface IRowsetWithParameters IRowsetWithParameters;
#endif 	/* __IRowsetWithParameters_FWD_DEFINED__ */


#ifndef __IRowsetAsynch_FWD_DEFINED__
#define __IRowsetAsynch_FWD_DEFINED__
typedef interface IRowsetAsynch IRowsetAsynch;
#endif 	/* __IRowsetAsynch_FWD_DEFINED__ */


#ifndef __IRowsetKeys_FWD_DEFINED__
#define __IRowsetKeys_FWD_DEFINED__
typedef interface IRowsetKeys IRowsetKeys;
#endif 	/* __IRowsetKeys_FWD_DEFINED__ */


#ifndef __IRowsetWatchAll_FWD_DEFINED__
#define __IRowsetWatchAll_FWD_DEFINED__
typedef interface IRowsetWatchAll IRowsetWatchAll;
#endif 	/* __IRowsetWatchAll_FWD_DEFINED__ */


#ifndef __IRowsetWatchNotify_FWD_DEFINED__
#define __IRowsetWatchNotify_FWD_DEFINED__
typedef interface IRowsetWatchNotify IRowsetWatchNotify;
#endif 	/* __IRowsetWatchNotify_FWD_DEFINED__ */


#ifndef __IRowsetWatchRegion_FWD_DEFINED__
#define __IRowsetWatchRegion_FWD_DEFINED__
typedef interface IRowsetWatchRegion IRowsetWatchRegion;
#endif 	/* __IRowsetWatchRegion_FWD_DEFINED__ */


#ifndef __IRowsetCopyRows_FWD_DEFINED__
#define __IRowsetCopyRows_FWD_DEFINED__
typedef interface IRowsetCopyRows IRowsetCopyRows;
#endif 	/* __IRowsetCopyRows_FWD_DEFINED__ */


#ifndef __IReadData_FWD_DEFINED__
#define __IReadData_FWD_DEFINED__
typedef interface IReadData IReadData;
#endif 	/* __IReadData_FWD_DEFINED__ */


#ifndef __ICommandCost_FWD_DEFINED__
#define __ICommandCost_FWD_DEFINED__
typedef interface ICommandCost ICommandCost;
#endif 	/* __ICommandCost_FWD_DEFINED__ */


#ifndef __ICommandValidate_FWD_DEFINED__
#define __ICommandValidate_FWD_DEFINED__
typedef interface ICommandValidate ICommandValidate;
#endif 	/* __ICommandValidate_FWD_DEFINED__ */


#ifndef __ITableRename_FWD_DEFINED__
#define __ITableRename_FWD_DEFINED__
typedef interface ITableRename ITableRename;
#endif 	/* __ITableRename_FWD_DEFINED__ */


#ifndef __IDBSchemaCommand_FWD_DEFINED__
#define __IDBSchemaCommand_FWD_DEFINED__
typedef interface IDBSchemaCommand IDBSchemaCommand;
#endif 	/* __IDBSchemaCommand_FWD_DEFINED__ */


#ifndef __IProvideMoniker_FWD_DEFINED__
#define __IProvideMoniker_FWD_DEFINED__
typedef interface IProvideMoniker IProvideMoniker;
#endif 	/* __IProvideMoniker_FWD_DEFINED__ */


/* header files for imported files */
#include "oledb.h"

#ifdef __cplusplus
extern "C"{
#endif 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/* interface __MIDL_itf_oledbdep_0000 */
/* [local] */ 

//+---------------------------------------------------------------------------
//
//  Microsoft OLE DB
//  Copyright (C) Microsoft Corporation, 1994 - 1999.
//
//----------------------------------------------------------------------------

#ifdef _WIN64
#include <pshpack8.h>	// 8-byte structure packing
#else
#include <pshpack2.h>	// 2-byte structure packing
#endif

#endif // GUID_DEFS_ONLY



extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_v0_0_s_ifspec;

#ifndef __DBStructureDefinitionsDep_INTERFACE_DEFINED__
#define __DBStructureDefinitionsDep_INTERFACE_DEFINED__

/* interface DBStructureDefinitionsDep */
/* [auto_handle][unique][uuid] */ 

#ifndef UNALIGNED
#if defined(_MIPS_) || defined(_ALPHA_) || defined(_PPC_)
#define UNALIGNED __unaligned
#else
#define UNALIGNED
#endif
#endif //UNALIGNED
#undef OLEDBDECLSPEC
#if _MSC_VER >= 1100
#define OLEDBDECLSPEC __declspec(selectany)
#else
#define OLEDBDECLSPEC 
#endif //_MSC_VER
#ifdef DBINITCONSTANTS
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CHECK_OPTION               = {0xc8b5220b,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED  = {0xc8b521f0,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DROP_CASCADE               = {0xc8b521f3,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_UNIQUE                     = {0xc8b521f5,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS    = {0xc8b52230,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_PRIMARY                    = {0xc8b521fc,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CLUSTERED                  = {0xc8b521ff,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_NONCLUSTERED               = {0xc8b52200,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_BTREE                      = {0xc8b52201,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_HASH                       = {0xc8b52202,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_FILLFACTOR                 = {0xc8b52203,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_INITIALSIZE                = {0xc8b52204,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DISALLOWNULL               = {0xc8b52205,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNORENULL                 = {0xc8b52206,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNOREANYNULL              = {0xc8b52207,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_SORTBOOKMARKS              = {0xc8b52208,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_AUTOMATICUPDATE            = {0xc8b52209,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_EXPLICITUPDATE             = {0xc8b5220a,0x5cf3,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}};
#else // !DBINITCONSTANTS
extern const GUID DB_PROPERTY_CHECK_OPTION;
extern const GUID DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED;
extern const GUID DB_PROPERTY_DROP_CASCADE;
extern const GUID DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS;
extern const GUID DB_PROPERTY_UNIQUE;
extern const GUID DB_PROPERTY_PRIMARY;
extern const GUID DB_PROPERTY_CLUSTERED;
extern const GUID DB_PROPERTY_NONCLUSTERED;
extern const GUID DB_PROPERTY_BTREE;
extern const GUID DB_PROPERTY_HASH;
extern const GUID DB_PROPERTY_FILLFACTOR;
extern const GUID DB_PROPERTY_INITIALSIZE;
extern const GUID DB_PROPERTY_DISALLOWNULL;
extern const GUID DB_PROPERTY_IGNORENULL;
extern const GUID DB_PROPERTY_IGNOREANYNULL;
extern const GUID DB_PROPERTY_SORTBOOKMARKS;
extern const GUID DB_PROPERTY_AUTOMATICUPDATE;
extern const GUID DB_PROPERTY_EXPLICITUPDATE;
#endif // DBINITCONSTANTS

#ifndef GUID_DEFS_ONLY

enum DBPROPENUM25_DEPRECATED
    {	DBPROP_ICommandCost	= 0x8dL,
	DBPROP_ICommandTree	= 0x8eL,
	DBPROP_ICommandValidate	= 0x8fL,
	DBPROP_IDBSchemaCommand	= 0x90L,
	DBPROP_IProvideMoniker	= 0x7dL,
	DBPROP_IQuery	= 0x92L,
	DBPROP_IReadData	= 0x93L,
	DBPROP_IRowsetAsynch	= 0x94L,
	DBPROP_IRowsetCopyRows	= 0x95L,
	DBPROP_IRowsetKeys	= 0x97L,
	DBPROP_IRowsetNewRowAfter	= 0x98L,
	DBPROP_IRowsetNextRowset	= 0x99L,
	DBPROP_IRowsetWatchAll	= 0x9bL,
	DBPROP_IRowsetWatchNotify	= 0x9cL,
	DBPROP_IRowsetWatchRegion	= 0x9dL,
	DBPROP_IRowsetWithParameters	= 0x9eL
    };

enum DBREASONENUM25
    {	DBREASON_ROWSET_ROWSADDED	= DBREASON_ROW_ASYNCHINSERT + 1,
	DBREASON_ROWSET_POPULATIONCOMPLETE	= DBREASON_ROWSET_ROWSADDED + 1,
	DBREASON_ROWSET_POPULATIONSTOPPED	= DBREASON_ROWSET_POPULATIONCOMPLETE + 1
    };
#endif // GUID_DEFS_ONLY



extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_c_ifspec;
extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_s_ifspec;
#endif /* __DBStructureDefinitionsDep_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_oledbdep_0345 */
/* [local] */ 

#ifndef GUID_DEFS_ONLY



extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0345_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0345_v0_0_s_ifspec;

#ifndef __IRowsetNextRowset_INTERFACE_DEFINED__
#define __IRowsetNextRowset_INTERFACE_DEFINED__

/* interface IRowsetNextRowset */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetNextRowset;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a72-2a1c-11ce-ade5-00aa0044773d")
    IRowsetNextRowset : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNextRowset( 
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppNextRowset) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetNextRowsetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetNextRowset __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetNextRowset __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetNextRowset __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNextRowset )( 
            IRowsetNextRowset __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppNextRowset);
        
        END_INTERFACE
    } IRowsetNextRowsetVtbl;

    interface IRowsetNextRowset
    {
        CONST_VTBL struct IRowsetNextRowsetVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetNextRowset_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetNextRowset_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetNextRowset_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetNextRowset_GetNextRowset(This,pUnkOuter,riid,ppNextRowset)	\
    (This)->lpVtbl -> GetNextRowset(This,pUnkOuter,riid,ppNextRowset)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetNextRowset_GetNextRowset_Proxy( 
    IRowsetNextRowset __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppNextRowset);


void __RPC_STUB IRowsetNextRowset_GetNextRowset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetNextRowset_INTERFACE_DEFINED__ */


#ifndef __IRowsetNewRowAfter_INTERFACE_DEFINED__
#define __IRowsetNewRowAfter_INTERFACE_DEFINED__

/* interface IRowsetNewRowAfter */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetNewRowAfter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a71-2a1c-11ce-ade5-00aa0044773d")
    IRowsetNewRowAfter : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetNewDataAfter( 
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ ULONG cbbmPrevious,
            /* [size_is][in] */ const BYTE __RPC_FAR *pbmPrevious,
            /* [in] */ HACCESSOR hAccessor,
            /* [in] */ BYTE __RPC_FAR *pData,
            /* [out] */ HROW __RPC_FAR *phRow) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetNewRowAfterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetNewRowAfter __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetNewRowAfter __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetNewRowAfter __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNewDataAfter )( 
            IRowsetNewRowAfter __RPC_FAR * This,
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ ULONG cbbmPrevious,
            /* [size_is][in] */ const BYTE __RPC_FAR *pbmPrevious,
            /* [in] */ HACCESSOR hAccessor,
            /* [in] */ BYTE __RPC_FAR *pData,
            /* [out] */ HROW __RPC_FAR *phRow);
        
        END_INTERFACE
    } IRowsetNewRowAfterVtbl;

    interface IRowsetNewRowAfter
    {
        CONST_VTBL struct IRowsetNewRowAfterVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetNewRowAfter_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetNewRowAfter_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetNewRowAfter_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetNewRowAfter_SetNewDataAfter(This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow)	\
    (This)->lpVtbl -> SetNewDataAfter(This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetNewRowAfter_SetNewDataAfter_Proxy( 
    IRowsetNewRowAfter __RPC_FAR * This,
    /* [in] */ HCHAPTER hChapter,
    /* [in] */ ULONG cbbmPrevious,
    /* [size_is][in] */ const BYTE __RPC_FAR *pbmPrevious,
    /* [in] */ HACCESSOR hAccessor,
    /* [in] */ BYTE __RPC_FAR *pData,
    /* [out] */ HROW __RPC_FAR *phRow);


void __RPC_STUB IRowsetNewRowAfter_SetNewDataAfter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetNewRowAfter_INTERFACE_DEFINED__ */


#ifndef __IRowsetWithParameters_INTERFACE_DEFINED__
#define __IRowsetWithParameters_INTERFACE_DEFINED__

/* interface IRowsetWithParameters */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetWithParameters;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a6e-2a1c-11ce-ade5-00aa0044773d")
    IRowsetWithParameters : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetParameterInfo( 
            /* [out][in] */ DB_UPARAMS __RPC_FAR *pcParams,
            /* [size_is][size_is][out] */ DBPARAMINFO __RPC_FAR *__RPC_FAR *prgParamInfo,
            /* [out] */ OLECHAR __RPC_FAR *__RPC_FAR *ppNamesBuffer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Requery( 
            /* [in] */ DBPARAMS __RPC_FAR *pParams,
            /* [out] */ ULONG __RPC_FAR *pulErrorParam,
            /* [out] */ HCHAPTER __RPC_FAR *phReserved) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetWithParametersVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetWithParameters __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetWithParameters __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetWithParameters __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetParameterInfo )( 
            IRowsetWithParameters __RPC_FAR * This,
            /* [out][in] */ DB_UPARAMS __RPC_FAR *pcParams,
            /* [size_is][size_is][out] */ DBPARAMINFO __RPC_FAR *__RPC_FAR *prgParamInfo,
            /* [out] */ OLECHAR __RPC_FAR *__RPC_FAR *ppNamesBuffer);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Requery )( 
            IRowsetWithParameters __RPC_FAR * This,
            /* [in] */ DBPARAMS __RPC_FAR *pParams,
            /* [out] */ ULONG __RPC_FAR *pulErrorParam,
            /* [out] */ HCHAPTER __RPC_FAR *phReserved);
        
        END_INTERFACE
    } IRowsetWithParametersVtbl;

    interface IRowsetWithParameters
    {
        CONST_VTBL struct IRowsetWithParametersVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetWithParameters_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetWithParameters_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetWithParameters_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetWithParameters_GetParameterInfo(This,pcParams,prgParamInfo,ppNamesBuffer)	\
    (This)->lpVtbl -> GetParameterInfo(This,pcParams,prgParamInfo,ppNamesBuffer)

#define IRowsetWithParameters_Requery(This,pParams,pulErrorParam,phReserved)	\
    (This)->lpVtbl -> Requery(This,pParams,pulErrorParam,phReserved)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetWithParameters_GetParameterInfo_Proxy( 
    IRowsetWithParameters __RPC_FAR * This,
    /* [out][in] */ DB_UPARAMS __RPC_FAR *pcParams,
    /* [size_is][size_is][out] */ DBPARAMINFO __RPC_FAR *__RPC_FAR *prgParamInfo,
    /* [out] */ OLECHAR __RPC_FAR *__RPC_FAR *ppNamesBuffer);


void __RPC_STUB IRowsetWithParameters_GetParameterInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWithParameters_Requery_Proxy( 
    IRowsetWithParameters __RPC_FAR * This,
    /* [in] */ DBPARAMS __RPC_FAR *pParams,
    /* [out] */ ULONG __RPC_FAR *pulErrorParam,
    /* [out] */ HCHAPTER __RPC_FAR *phReserved);


void __RPC_STUB IRowsetWithParameters_Requery_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetWithParameters_INTERFACE_DEFINED__ */


#ifndef __IRowsetAsynch_INTERFACE_DEFINED__
#define __IRowsetAsynch_INTERFACE_DEFINED__

/* interface IRowsetAsynch */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetAsynch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a0f-2a1c-11ce-ade5-00aa0044773d")
    IRowsetAsynch : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RatioFinished( 
            /* [out] */ DBCOUNTITEM __RPC_FAR *pulDenominator,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pulNumerator,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRows,
            /* [out] */ BOOL __RPC_FAR *pfNewRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetAsynchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetAsynch __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetAsynch __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetAsynch __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RatioFinished )( 
            IRowsetAsynch __RPC_FAR * This,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pulDenominator,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pulNumerator,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRows,
            /* [out] */ BOOL __RPC_FAR *pfNewRows);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Stop )( 
            IRowsetAsynch __RPC_FAR * This);
        
        END_INTERFACE
    } IRowsetAsynchVtbl;

    interface IRowsetAsynch
    {
        CONST_VTBL struct IRowsetAsynchVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetAsynch_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetAsynch_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetAsynch_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetAsynch_RatioFinished(This,pulDenominator,pulNumerator,pcRows,pfNewRows)	\
    (This)->lpVtbl -> RatioFinished(This,pulDenominator,pulNumerator,pcRows,pfNewRows)

#define IRowsetAsynch_Stop(This)	\
    (This)->lpVtbl -> Stop(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetAsynch_RatioFinished_Proxy( 
    IRowsetAsynch __RPC_FAR * This,
    /* [out] */ DBCOUNTITEM __RPC_FAR *pulDenominator,
    /* [out] */ DBCOUNTITEM __RPC_FAR *pulNumerator,
    /* [out] */ DBCOUNTITEM __RPC_FAR *pcRows,
    /* [out] */ BOOL __RPC_FAR *pfNewRows);


void __RPC_STUB IRowsetAsynch_RatioFinished_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetAsynch_Stop_Proxy( 
    IRowsetAsynch __RPC_FAR * This);


void __RPC_STUB IRowsetAsynch_Stop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetAsynch_INTERFACE_DEFINED__ */


#ifndef __IRowsetKeys_INTERFACE_DEFINED__
#define __IRowsetKeys_INTERFACE_DEFINED__

/* interface IRowsetKeys */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetKeys;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a12-2a1c-11ce-ade5-00aa0044773d")
    IRowsetKeys : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ListKeys( 
            /* [out][in] */ DBORDINAL __RPC_FAR *pcColumns,
            /* [size_is][size_is][out] */ DBORDINAL __RPC_FAR *__RPC_FAR *prgColumns) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetKeysVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetKeys __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetKeys __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetKeys __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ListKeys )( 
            IRowsetKeys __RPC_FAR * This,
            /* [out][in] */ DBORDINAL __RPC_FAR *pcColumns,
            /* [size_is][size_is][out] */ DBORDINAL __RPC_FAR *__RPC_FAR *prgColumns);
        
        END_INTERFACE
    } IRowsetKeysVtbl;

    interface IRowsetKeys
    {
        CONST_VTBL struct IRowsetKeysVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetKeys_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetKeys_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetKeys_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetKeys_ListKeys(This,pcColumns,prgColumns)	\
    (This)->lpVtbl -> ListKeys(This,pcColumns,prgColumns)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetKeys_ListKeys_Proxy( 
    IRowsetKeys __RPC_FAR * This,
    /* [out][in] */ DBORDINAL __RPC_FAR *pcColumns,
    /* [size_is][size_is][out] */ DBORDINAL __RPC_FAR *__RPC_FAR *prgColumns);


void __RPC_STUB IRowsetKeys_ListKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetKeys_INTERFACE_DEFINED__ */


#ifndef __IRowsetWatchAll_INTERFACE_DEFINED__
#define __IRowsetWatchAll_INTERFACE_DEFINED__

/* interface IRowsetWatchAll */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IRowsetWatchAll;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a73-2a1c-11ce-ade5-00aa0044773d")
    IRowsetWatchAll : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Acknowledge( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Start( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopWatching( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetWatchAllVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetWatchAll __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetWatchAll __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetWatchAll __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Acknowledge )( 
            IRowsetWatchAll __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IRowsetWatchAll __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StopWatching )( 
            IRowsetWatchAll __RPC_FAR * This);
        
        END_INTERFACE
    } IRowsetWatchAllVtbl;

    interface IRowsetWatchAll
    {
        CONST_VTBL struct IRowsetWatchAllVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetWatchAll_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetWatchAll_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetWatchAll_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetWatchAll_Acknowledge(This)	\
    (This)->lpVtbl -> Acknowledge(This)

#define IRowsetWatchAll_Start(This)	\
    (This)->lpVtbl -> Start(This)

#define IRowsetWatchAll_StopWatching(This)	\
    (This)->lpVtbl -> StopWatching(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetWatchAll_Acknowledge_Proxy( 
    IRowsetWatchAll __RPC_FAR * This);


void __RPC_STUB IRowsetWatchAll_Acknowledge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchAll_Start_Proxy( 
    IRowsetWatchAll __RPC_FAR * This);


void __RPC_STUB IRowsetWatchAll_Start_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchAll_StopWatching_Proxy( 
    IRowsetWatchAll __RPC_FAR * This);


void __RPC_STUB IRowsetWatchAll_StopWatching_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetWatchAll_INTERFACE_DEFINED__ */


#ifndef __IRowsetWatchNotify_INTERFACE_DEFINED__
#define __IRowsetWatchNotify_INTERFACE_DEFINED__

/* interface IRowsetWatchNotify */
/* [unique][uuid][object][local] */ 

typedef DWORD DBWATCHNOTIFY;


enum DBWATCHNOTIFYENUM
    {	DBWATCHNOTIFY_ROWSCHANGED	= 1,
	DBWATCHNOTIFY_QUERYDONE	= 2,
	DBWATCHNOTIFY_QUERYREEXECUTED	= 3
    };

EXTERN_C const IID IID_IRowsetWatchNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a44-2a1c-11ce-ade5-00aa0044773d")
    IRowsetWatchNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnChange( 
            /* [in] */ IRowset __RPC_FAR *pRowset,
            /* [in] */ DBWATCHNOTIFY eChangeReason) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetWatchNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetWatchNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetWatchNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetWatchNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnChange )( 
            IRowsetWatchNotify __RPC_FAR * This,
            /* [in] */ IRowset __RPC_FAR *pRowset,
            /* [in] */ DBWATCHNOTIFY eChangeReason);
        
        END_INTERFACE
    } IRowsetWatchNotifyVtbl;

    interface IRowsetWatchNotify
    {
        CONST_VTBL struct IRowsetWatchNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetWatchNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetWatchNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetWatchNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetWatchNotify_OnChange(This,pRowset,eChangeReason)	\
    (This)->lpVtbl -> OnChange(This,pRowset,eChangeReason)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetWatchNotify_OnChange_Proxy( 
    IRowsetWatchNotify __RPC_FAR * This,
    /* [in] */ IRowset __RPC_FAR *pRowset,
    /* [in] */ DBWATCHNOTIFY eChangeReason);


void __RPC_STUB IRowsetWatchNotify_OnChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetWatchNotify_INTERFACE_DEFINED__ */


#ifndef __IRowsetWatchRegion_INTERFACE_DEFINED__
#define __IRowsetWatchRegion_INTERFACE_DEFINED__

/* interface IRowsetWatchRegion */
/* [unique][uuid][object][local] */ 

typedef DWORD DBWATCHMODE;


enum DBWATCHMODEENUM
    {	DBWATCHMODE_ALL	= 0x1,
	DBWATCHMODE_EXTEND	= 0x2,
	DBWATCHMODE_MOVE	= 0x4,
	DBWATCHMODE_COUNT	= 0x8
    };
typedef DWORD DBROWCHANGEKIND;


enum DBROWCHANGEKINDENUM
    {	DBROWCHANGEKIND_INSERT	= 0,
	DBROWCHANGEKIND_DELETE	= DBROWCHANGEKIND_INSERT + 1,
	DBROWCHANGEKIND_UPDATE	= DBROWCHANGEKIND_DELETE + 1,
	DBROWCHANGEKIND_COUNT	= DBROWCHANGEKIND_UPDATE + 1
    };
typedef struct tagDBROWWATCHRANGE
    {
    HWATCHREGION hRegion;
    DBROWCHANGEKIND eChangeKind;
    HROW hRow;
    DBCOUNTITEM iRow;
    }	DBROWWATCHCHANGE;


EXTERN_C const IID IID_IRowsetWatchRegion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a45-2a1c-11ce-ade5-00aa0044773d")
    IRowsetWatchRegion : public IRowsetWatchAll
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateWatchRegion( 
            /* [in] */ DBWATCHMODE dwWatchMode,
            /* [out] */ HWATCHREGION __RPC_FAR *phRegion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangeWatchMode( 
            /* [in] */ HWATCHREGION hRegion,
            /* [in] */ DBWATCHMODE dwWatchMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteWatchRegion( 
            /* [in] */ HWATCHREGION hRegion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWatchRegionInfo( 
            /* [in] */ HWATCHREGION hRegion,
            /* [out] */ DBWATCHMODE __RPC_FAR *pdwWatchMode,
            /* [out] */ HCHAPTER __RPC_FAR *phChapter,
            /* [out][in] */ DBBKMARK __RPC_FAR *pcbBookmark,
            /* [size_is][size_is][out] */ BYTE __RPC_FAR *__RPC_FAR *ppBookmark,
            /* [out] */ DBROWCOUNT __RPC_FAR *pcRows) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Refresh( 
            /* [out][in] */ DBCOUNTITEM __RPC_FAR *pcChangesObtained,
            /* [size_is][size_is][out] */ DBROWWATCHCHANGE __RPC_FAR *__RPC_FAR *prgChanges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShrinkWatchRegion( 
            /* [in] */ HWATCHREGION hRegion,
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ DBBKMARK cbBookmark,
            /* [size_is][in] */ BYTE __RPC_FAR *pBookmark,
            /* [in] */ DBROWCOUNT cRows) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetWatchRegionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetWatchRegion __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetWatchRegion __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Acknowledge )( 
            IRowsetWatchRegion __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Start )( 
            IRowsetWatchRegion __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *StopWatching )( 
            IRowsetWatchRegion __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CreateWatchRegion )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ DBWATCHMODE dwWatchMode,
            /* [out] */ HWATCHREGION __RPC_FAR *phRegion);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ChangeWatchMode )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ HWATCHREGION hRegion,
            /* [in] */ DBWATCHMODE dwWatchMode);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DeleteWatchRegion )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ HWATCHREGION hRegion);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetWatchRegionInfo )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ HWATCHREGION hRegion,
            /* [out] */ DBWATCHMODE __RPC_FAR *pdwWatchMode,
            /* [out] */ HCHAPTER __RPC_FAR *phChapter,
            /* [out][in] */ DBBKMARK __RPC_FAR *pcbBookmark,
            /* [size_is][size_is][out] */ BYTE __RPC_FAR *__RPC_FAR *ppBookmark,
            /* [out] */ DBROWCOUNT __RPC_FAR *pcRows);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Refresh )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [out][in] */ DBCOUNTITEM __RPC_FAR *pcChangesObtained,
            /* [size_is][size_is][out] */ DBROWWATCHCHANGE __RPC_FAR *__RPC_FAR *prgChanges);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ShrinkWatchRegion )( 
            IRowsetWatchRegion __RPC_FAR * This,
            /* [in] */ HWATCHREGION hRegion,
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ DBBKMARK cbBookmark,
            /* [size_is][in] */ BYTE __RPC_FAR *pBookmark,
            /* [in] */ DBROWCOUNT cRows);
        
        END_INTERFACE
    } IRowsetWatchRegionVtbl;

    interface IRowsetWatchRegion
    {
        CONST_VTBL struct IRowsetWatchRegionVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetWatchRegion_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetWatchRegion_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetWatchRegion_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetWatchRegion_Acknowledge(This)	\
    (This)->lpVtbl -> Acknowledge(This)

#define IRowsetWatchRegion_Start(This)	\
    (This)->lpVtbl -> Start(This)

#define IRowsetWatchRegion_StopWatching(This)	\
    (This)->lpVtbl -> StopWatching(This)


#define IRowsetWatchRegion_CreateWatchRegion(This,dwWatchMode,phRegion)	\
    (This)->lpVtbl -> CreateWatchRegion(This,dwWatchMode,phRegion)

#define IRowsetWatchRegion_ChangeWatchMode(This,hRegion,dwWatchMode)	\
    (This)->lpVtbl -> ChangeWatchMode(This,hRegion,dwWatchMode)

#define IRowsetWatchRegion_DeleteWatchRegion(This,hRegion)	\
    (This)->lpVtbl -> DeleteWatchRegion(This,hRegion)

#define IRowsetWatchRegion_GetWatchRegionInfo(This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows)	\
    (This)->lpVtbl -> GetWatchRegionInfo(This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows)

#define IRowsetWatchRegion_Refresh(This,pcChangesObtained,prgChanges)	\
    (This)->lpVtbl -> Refresh(This,pcChangesObtained,prgChanges)

#define IRowsetWatchRegion_ShrinkWatchRegion(This,hRegion,hChapter,cbBookmark,pBookmark,cRows)	\
    (This)->lpVtbl -> ShrinkWatchRegion(This,hRegion,hChapter,cbBookmark,pBookmark,cRows)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_CreateWatchRegion_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [in] */ DBWATCHMODE dwWatchMode,
    /* [out] */ HWATCHREGION __RPC_FAR *phRegion);


void __RPC_STUB IRowsetWatchRegion_CreateWatchRegion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_ChangeWatchMode_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [in] */ HWATCHREGION hRegion,
    /* [in] */ DBWATCHMODE dwWatchMode);


void __RPC_STUB IRowsetWatchRegion_ChangeWatchMode_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_DeleteWatchRegion_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [in] */ HWATCHREGION hRegion);


void __RPC_STUB IRowsetWatchRegion_DeleteWatchRegion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_GetWatchRegionInfo_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [in] */ HWATCHREGION hRegion,
    /* [out] */ DBWATCHMODE __RPC_FAR *pdwWatchMode,
    /* [out] */ HCHAPTER __RPC_FAR *phChapter,
    /* [out][in] */ DBBKMARK __RPC_FAR *pcbBookmark,
    /* [size_is][size_is][out] */ BYTE __RPC_FAR *__RPC_FAR *ppBookmark,
    /* [out] */ DBROWCOUNT __RPC_FAR *pcRows);


void __RPC_STUB IRowsetWatchRegion_GetWatchRegionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_Refresh_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [out][in] */ DBCOUNTITEM __RPC_FAR *pcChangesObtained,
    /* [size_is][size_is][out] */ DBROWWATCHCHANGE __RPC_FAR *__RPC_FAR *prgChanges);


void __RPC_STUB IRowsetWatchRegion_Refresh_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetWatchRegion_ShrinkWatchRegion_Proxy( 
    IRowsetWatchRegion __RPC_FAR * This,
    /* [in] */ HWATCHREGION hRegion,
    /* [in] */ HCHAPTER hChapter,
    /* [in] */ DBBKMARK cbBookmark,
    /* [size_is][in] */ BYTE __RPC_FAR *pBookmark,
    /* [in] */ DBROWCOUNT cRows);


void __RPC_STUB IRowsetWatchRegion_ShrinkWatchRegion_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetWatchRegion_INTERFACE_DEFINED__ */


#ifndef __IRowsetCopyRows_INTERFACE_DEFINED__
#define __IRowsetCopyRows_INTERFACE_DEFINED__

/* interface IRowsetCopyRows */
/* [unique][uuid][object][local] */ 

typedef WORD HSOURCE;


EXTERN_C const IID IID_IRowsetCopyRows;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a6b-2a1c-11ce-ade5-00aa0044773d")
    IRowsetCopyRows : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CloseSource( 
            /* [in] */ HSOURCE hSourceID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyByHROWS( 
            /* [in] */ HSOURCE hSourceID,
            /* [in] */ HCHAPTER hReserved,
            /* [in] */ DBROWCOUNT cRows,
            /* [size_is][in] */ const HROW __RPC_FAR rghRows[  ],
            /* [in] */ ULONG bFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyRows( 
            /* [in] */ HSOURCE hSourceID,
            /* [in] */ HCHAPTER hReserved,
            /* [in] */ DBROWCOUNT cRows,
            /* [in] */ ULONG bFlags,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsCopied) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DefineSource( 
            /* [in] */ const IRowset __RPC_FAR *pRowsetSource,
            /* [in] */ const DBORDINAL cColIds,
            /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgSourceColumns[  ],
            /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgTargetColumns[  ],
            /* [out] */ HSOURCE __RPC_FAR *phSourceID) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IRowsetCopyRowsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IRowsetCopyRows __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IRowsetCopyRows __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IRowsetCopyRows __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseSource )( 
            IRowsetCopyRows __RPC_FAR * This,
            /* [in] */ HSOURCE hSourceID);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CopyByHROWS )( 
            IRowsetCopyRows __RPC_FAR * This,
            /* [in] */ HSOURCE hSourceID,
            /* [in] */ HCHAPTER hReserved,
            /* [in] */ DBROWCOUNT cRows,
            /* [size_is][in] */ const HROW __RPC_FAR rghRows[  ],
            /* [in] */ ULONG bFlags);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CopyRows )( 
            IRowsetCopyRows __RPC_FAR * This,
            /* [in] */ HSOURCE hSourceID,
            /* [in] */ HCHAPTER hReserved,
            /* [in] */ DBROWCOUNT cRows,
            /* [in] */ ULONG bFlags,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsCopied);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DefineSource )( 
            IRowsetCopyRows __RPC_FAR * This,
            /* [in] */ const IRowset __RPC_FAR *pRowsetSource,
            /* [in] */ const DBORDINAL cColIds,
            /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgSourceColumns[  ],
            /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgTargetColumns[  ],
            /* [out] */ HSOURCE __RPC_FAR *phSourceID);
        
        END_INTERFACE
    } IRowsetCopyRowsVtbl;

    interface IRowsetCopyRows
    {
        CONST_VTBL struct IRowsetCopyRowsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRowsetCopyRows_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IRowsetCopyRows_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IRowsetCopyRows_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IRowsetCopyRows_CloseSource(This,hSourceID)	\
    (This)->lpVtbl -> CloseSource(This,hSourceID)

#define IRowsetCopyRows_CopyByHROWS(This,hSourceID,hReserved,cRows,rghRows,bFlags)	\
    (This)->lpVtbl -> CopyByHROWS(This,hSourceID,hReserved,cRows,rghRows,bFlags)

#define IRowsetCopyRows_CopyRows(This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied)	\
    (This)->lpVtbl -> CopyRows(This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied)

#define IRowsetCopyRows_DefineSource(This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID)	\
    (This)->lpVtbl -> DefineSource(This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IRowsetCopyRows_CloseSource_Proxy( 
    IRowsetCopyRows __RPC_FAR * This,
    /* [in] */ HSOURCE hSourceID);


void __RPC_STUB IRowsetCopyRows_CloseSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetCopyRows_CopyByHROWS_Proxy( 
    IRowsetCopyRows __RPC_FAR * This,
    /* [in] */ HSOURCE hSourceID,
    /* [in] */ HCHAPTER hReserved,
    /* [in] */ DBROWCOUNT cRows,
    /* [size_is][in] */ const HROW __RPC_FAR rghRows[  ],
    /* [in] */ ULONG bFlags);


void __RPC_STUB IRowsetCopyRows_CopyByHROWS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetCopyRows_CopyRows_Proxy( 
    IRowsetCopyRows __RPC_FAR * This,
    /* [in] */ HSOURCE hSourceID,
    /* [in] */ HCHAPTER hReserved,
    /* [in] */ DBROWCOUNT cRows,
    /* [in] */ ULONG bFlags,
    /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsCopied);


void __RPC_STUB IRowsetCopyRows_CopyRows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IRowsetCopyRows_DefineSource_Proxy( 
    IRowsetCopyRows __RPC_FAR * This,
    /* [in] */ const IRowset __RPC_FAR *pRowsetSource,
    /* [in] */ const DBORDINAL cColIds,
    /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgSourceColumns[  ],
    /* [size_is][in] */ const DB_LORDINAL __RPC_FAR rgTargetColumns[  ],
    /* [out] */ HSOURCE __RPC_FAR *phSourceID);


void __RPC_STUB IRowsetCopyRows_DefineSource_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IRowsetCopyRows_INTERFACE_DEFINED__ */


#ifndef __IReadData_INTERFACE_DEFINED__
#define __IReadData_INTERFACE_DEFINED__

/* interface IReadData */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IReadData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a6a-2a1c-11ce-ade5-00aa0044773d")
    IReadData : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ReadData( 
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ DBBKMARK cbBookmark,
            /* [size_is][in] */ const BYTE __RPC_FAR *pBookmark,
            /* [in] */ DBROWOFFSET lRowsOffset,
            /* [in] */ HACCESSOR hAccessor,
            /* [in] */ DBROWCOUNT cRows,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsObtained,
            /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppFixedData,
            /* [out][in] */ DBLENGTH __RPC_FAR *pcbVariableTotal,
            /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppVariableData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseChapter( 
            /* [in] */ HCHAPTER hChapter) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IReadDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IReadData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IReadData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IReadData __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReadData )( 
            IReadData __RPC_FAR * This,
            /* [in] */ HCHAPTER hChapter,
            /* [in] */ DBBKMARK cbBookmark,
            /* [size_is][in] */ const BYTE __RPC_FAR *pBookmark,
            /* [in] */ DBROWOFFSET lRowsOffset,
            /* [in] */ HACCESSOR hAccessor,
            /* [in] */ DBROWCOUNT cRows,
            /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsObtained,
            /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppFixedData,
            /* [out][in] */ DBLENGTH __RPC_FAR *pcbVariableTotal,
            /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppVariableData);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ReleaseChapter )( 
            IReadData __RPC_FAR * This,
            /* [in] */ HCHAPTER hChapter);
        
        END_INTERFACE
    } IReadDataVtbl;

    interface IReadData
    {
        CONST_VTBL struct IReadDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IReadData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IReadData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IReadData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IReadData_ReadData(This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData)	\
    (This)->lpVtbl -> ReadData(This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData)

#define IReadData_ReleaseChapter(This,hChapter)	\
    (This)->lpVtbl -> ReleaseChapter(This,hChapter)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IReadData_ReadData_Proxy( 
    IReadData __RPC_FAR * This,
    /* [in] */ HCHAPTER hChapter,
    /* [in] */ DBBKMARK cbBookmark,
    /* [size_is][in] */ const BYTE __RPC_FAR *pBookmark,
    /* [in] */ DBROWOFFSET lRowsOffset,
    /* [in] */ HACCESSOR hAccessor,
    /* [in] */ DBROWCOUNT cRows,
    /* [out] */ DBCOUNTITEM __RPC_FAR *pcRowsObtained,
    /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppFixedData,
    /* [out][in] */ DBLENGTH __RPC_FAR *pcbVariableTotal,
    /* [out][in] */ BYTE __RPC_FAR *__RPC_FAR *ppVariableData);


void __RPC_STUB IReadData_ReadData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IReadData_ReleaseChapter_Proxy( 
    IReadData __RPC_FAR * This,
    /* [in] */ HCHAPTER hChapter);


void __RPC_STUB IReadData_ReleaseChapter_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IReadData_INTERFACE_DEFINED__ */


#ifndef __ICommandCost_INTERFACE_DEFINED__
#define __ICommandCost_INTERFACE_DEFINED__

/* interface ICommandCost */
/* [unique][uuid][object][local] */ 

typedef DWORD DBRESOURCEKIND;


enum DBRESOURCEKINDENUM
    {	DBRESOURCE_INVALID	= 0,
	DBRESOURCE_TOTAL	= 1,
	DBRESOURCE_CPU	= 2,
	DBRESOURCE_MEMORY	= 3,
	DBRESOURCE_DISK	= 4,
	DBRESOURCE_NETWORK	= 5,
	DBRESOURCE_RESPONSE	= 6,
	DBRESOURCE_ROWS	= 7,
	DBRESOURCE_OTHER	= 8
    };
typedef DWORD DBCOSTUNIT;


enum DBCOSTUNITENUM
    {	DBUNIT_INVALID	= 0,
	DBUNIT_WEIGHT	= 0x1,
	DBUNIT_PERCENT	= 0x2,
	DBUNIT_MAXIMUM	= 0x4,
	DBUNIT_MINIMUM	= 0x8,
	DBUNIT_MICRO_SECOND	= 0x10,
	DBUNIT_MILLI_SECOND	= 0x20,
	DBUNIT_SECOND	= 0x40,
	DBUNIT_MINUTE	= 0x80,
	DBUNIT_HOUR	= 0x100,
	DBUNIT_BYTE	= 0x200,
	DBUNIT_KILO_BYTE	= 0x400,
	DBUNIT_MEGA_BYTE	= 0x800,
	DBUNIT_GIGA_BYTE	= 0x1000,
	DBUNIT_NUM_MSGS	= 0x2000,
	DBUNIT_NUM_LOCKS	= 0x4000,
	DBUNIT_NUM_ROWS	= 0x8000,
	DBUNIT_OTHER	= 0x10000
    };
typedef struct tagDBCOST
    {
    DBRESOURCEKIND eKind;
    DBCOSTUNIT dwUnits;
    LONG lValue;
    }	DBCOST;

typedef DWORD DBEXECLIMITS;


enum DBEXECLIMITSENUM
    {	DBEXECLIMITS_ABORT	= 1,
	DBEXECLIMITS_STOP	= 2,
	DBEXECLIMITS_SUSPEND	= 3
    };

EXTERN_C const IID IID_ICommandCost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a4e-2a1c-11ce-ade5-00aa0044773d")
    ICommandCost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAccumulatedCost( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out][in] */ ULONG __RPC_FAR *pcCostLimits,
            /* [size_is][size_is][out] */ DBCOST __RPC_FAR *__RPC_FAR *prgCostLimits) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCostEstimate( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostEstimates,
            /* [out] */ DBCOST __RPC_FAR *prgCostEstimates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCostGoals( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostGoals,
            /* [out] */ DBCOST __RPC_FAR *prgCostGoals) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCostLimits( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostLimits,
            /* [out] */ DBCOST __RPC_FAR *prgCostLimits) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCostGoals( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [in] */ ULONG cCostGoals,
            /* [size_is][in] */ const DBCOST __RPC_FAR rgCostGoals[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCostLimits( 
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [in] */ ULONG cCostLimits,
            /* [in] */ DBCOST __RPC_FAR *prgCostLimits,
            /* [in] */ DBEXECLIMITS dwExecutionFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommandCostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommandCost __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommandCost __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetAccumulatedCost )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out][in] */ ULONG __RPC_FAR *pcCostLimits,
            /* [size_is][size_is][out] */ DBCOST __RPC_FAR *__RPC_FAR *prgCostLimits);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCostEstimate )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostEstimates,
            /* [out] */ DBCOST __RPC_FAR *prgCostEstimates);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCostGoals )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostGoals,
            /* [out] */ DBCOST __RPC_FAR *prgCostGoals);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCostLimits )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [out] */ ULONG __RPC_FAR *pcCostLimits,
            /* [out] */ DBCOST __RPC_FAR *prgCostLimits);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCostGoals )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [in] */ ULONG cCostGoals,
            /* [size_is][in] */ const DBCOST __RPC_FAR rgCostGoals[  ]);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetCostLimits )( 
            ICommandCost __RPC_FAR * This,
            /* [in] */ LPCOLESTR pwszRowsetName,
            /* [in] */ ULONG cCostLimits,
            /* [in] */ DBCOST __RPC_FAR *prgCostLimits,
            /* [in] */ DBEXECLIMITS dwExecutionFlags);
        
        END_INTERFACE
    } ICommandCostVtbl;

    interface ICommandCost
    {
        CONST_VTBL struct ICommandCostVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommandCost_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommandCost_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommandCost_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommandCost_GetAccumulatedCost(This,pwszRowsetName,pcCostLimits,prgCostLimits)	\
    (This)->lpVtbl -> GetAccumulatedCost(This,pwszRowsetName,pcCostLimits,prgCostLimits)

#define ICommandCost_GetCostEstimate(This,pwszRowsetName,pcCostEstimates,prgCostEstimates)	\
    (This)->lpVtbl -> GetCostEstimate(This,pwszRowsetName,pcCostEstimates,prgCostEstimates)

#define ICommandCost_GetCostGoals(This,pwszRowsetName,pcCostGoals,prgCostGoals)	\
    (This)->lpVtbl -> GetCostGoals(This,pwszRowsetName,pcCostGoals,prgCostGoals)

#define ICommandCost_GetCostLimits(This,pwszRowsetName,pcCostLimits,prgCostLimits)	\
    (This)->lpVtbl -> GetCostLimits(This,pwszRowsetName,pcCostLimits,prgCostLimits)

#define ICommandCost_SetCostGoals(This,pwszRowsetName,cCostGoals,rgCostGoals)	\
    (This)->lpVtbl -> SetCostGoals(This,pwszRowsetName,cCostGoals,rgCostGoals)

#define ICommandCost_SetCostLimits(This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags)	\
    (This)->lpVtbl -> SetCostLimits(This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICommandCost_GetAccumulatedCost_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [out][in] */ ULONG __RPC_FAR *pcCostLimits,
    /* [size_is][size_is][out] */ DBCOST __RPC_FAR *__RPC_FAR *prgCostLimits);


void __RPC_STUB ICommandCost_GetAccumulatedCost_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandCost_GetCostEstimate_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [out] */ ULONG __RPC_FAR *pcCostEstimates,
    /* [out] */ DBCOST __RPC_FAR *prgCostEstimates);


void __RPC_STUB ICommandCost_GetCostEstimate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandCost_GetCostGoals_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [out] */ ULONG __RPC_FAR *pcCostGoals,
    /* [out] */ DBCOST __RPC_FAR *prgCostGoals);


void __RPC_STUB ICommandCost_GetCostGoals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandCost_GetCostLimits_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [out] */ ULONG __RPC_FAR *pcCostLimits,
    /* [out] */ DBCOST __RPC_FAR *prgCostLimits);


void __RPC_STUB ICommandCost_GetCostLimits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandCost_SetCostGoals_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [in] */ ULONG cCostGoals,
    /* [size_is][in] */ const DBCOST __RPC_FAR rgCostGoals[  ]);


void __RPC_STUB ICommandCost_SetCostGoals_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandCost_SetCostLimits_Proxy( 
    ICommandCost __RPC_FAR * This,
    /* [in] */ LPCOLESTR pwszRowsetName,
    /* [in] */ ULONG cCostLimits,
    /* [in] */ DBCOST __RPC_FAR *prgCostLimits,
    /* [in] */ DBEXECLIMITS dwExecutionFlags);


void __RPC_STUB ICommandCost_SetCostLimits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommandCost_INTERFACE_DEFINED__ */


#ifndef __ICommandValidate_INTERFACE_DEFINED__
#define __ICommandValidate_INTERFACE_DEFINED__

/* interface ICommandValidate */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_ICommandValidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a18-2a1c-11ce-ade5-00aa0044773d")
    ICommandValidate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ValidateCompletely( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateSyntax( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICommandValidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICommandValidate __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICommandValidate __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICommandValidate __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ValidateCompletely )( 
            ICommandValidate __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ValidateSyntax )( 
            ICommandValidate __RPC_FAR * This);
        
        END_INTERFACE
    } ICommandValidateVtbl;

    interface ICommandValidate
    {
        CONST_VTBL struct ICommandValidateVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICommandValidate_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICommandValidate_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICommandValidate_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICommandValidate_ValidateCompletely(This)	\
    (This)->lpVtbl -> ValidateCompletely(This)

#define ICommandValidate_ValidateSyntax(This)	\
    (This)->lpVtbl -> ValidateSyntax(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ICommandValidate_ValidateCompletely_Proxy( 
    ICommandValidate __RPC_FAR * This);


void __RPC_STUB ICommandValidate_ValidateCompletely_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ICommandValidate_ValidateSyntax_Proxy( 
    ICommandValidate __RPC_FAR * This);


void __RPC_STUB ICommandValidate_ValidateSyntax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICommandValidate_INTERFACE_DEFINED__ */


#ifndef __ITableRename_INTERFACE_DEFINED__
#define __ITableRename_INTERFACE_DEFINED__

/* interface ITableRename */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_ITableRename;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a77-2a1c-11ce-ade5-00aa0044773d")
    ITableRename : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RenameColumn( 
            /* [in] */ DBID __RPC_FAR *pTableId,
            /* [in] */ DBID __RPC_FAR *pOldColumnId,
            /* [in] */ DBID __RPC_FAR *pNewColumnId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RenameTable( 
            /* [in] */ DBID __RPC_FAR *pOldTableId,
            /* [in] */ DBID __RPC_FAR *pOldIndexId,
            /* [in] */ DBID __RPC_FAR *pNewTableId,
            /* [in] */ DBID __RPC_FAR *pNewIndexId) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITableRenameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ITableRename __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ITableRename __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ITableRename __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RenameColumn )( 
            ITableRename __RPC_FAR * This,
            /* [in] */ DBID __RPC_FAR *pTableId,
            /* [in] */ DBID __RPC_FAR *pOldColumnId,
            /* [in] */ DBID __RPC_FAR *pNewColumnId);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RenameTable )( 
            ITableRename __RPC_FAR * This,
            /* [in] */ DBID __RPC_FAR *pOldTableId,
            /* [in] */ DBID __RPC_FAR *pOldIndexId,
            /* [in] */ DBID __RPC_FAR *pNewTableId,
            /* [in] */ DBID __RPC_FAR *pNewIndexId);
        
        END_INTERFACE
    } ITableRenameVtbl;

    interface ITableRename
    {
        CONST_VTBL struct ITableRenameVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITableRename_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITableRename_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITableRename_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITableRename_RenameColumn(This,pTableId,pOldColumnId,pNewColumnId)	\
    (This)->lpVtbl -> RenameColumn(This,pTableId,pOldColumnId,pNewColumnId)

#define ITableRename_RenameTable(This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId)	\
    (This)->lpVtbl -> RenameTable(This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE ITableRename_RenameColumn_Proxy( 
    ITableRename __RPC_FAR * This,
    /* [in] */ DBID __RPC_FAR *pTableId,
    /* [in] */ DBID __RPC_FAR *pOldColumnId,
    /* [in] */ DBID __RPC_FAR *pNewColumnId);


void __RPC_STUB ITableRename_RenameColumn_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE ITableRename_RenameTable_Proxy( 
    ITableRename __RPC_FAR * This,
    /* [in] */ DBID __RPC_FAR *pOldTableId,
    /* [in] */ DBID __RPC_FAR *pOldIndexId,
    /* [in] */ DBID __RPC_FAR *pNewTableId,
    /* [in] */ DBID __RPC_FAR *pNewIndexId);


void __RPC_STUB ITableRename_RenameTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITableRename_INTERFACE_DEFINED__ */


#ifndef __IDBSchemaCommand_INTERFACE_DEFINED__
#define __IDBSchemaCommand_INTERFACE_DEFINED__

/* interface IDBSchemaCommand */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IDBSchemaCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a50-2a1c-11ce-ade5-00aa0044773d")
    IDBSchemaCommand : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetCommand( 
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFGUID rguidSchema,
            /* [out] */ ICommand __RPC_FAR *__RPC_FAR *ppCommand) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSchemas( 
            /* [out][in] */ ULONG __RPC_FAR *pcSchemas,
            /* [size_is][size_is][out] */ GUID __RPC_FAR *__RPC_FAR *prgSchemas) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDBSchemaCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDBSchemaCommand __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDBSchemaCommand __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDBSchemaCommand __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetCommand )( 
            IDBSchemaCommand __RPC_FAR * This,
            /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
            /* [in] */ REFGUID rguidSchema,
            /* [out] */ ICommand __RPC_FAR *__RPC_FAR *ppCommand);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetSchemas )( 
            IDBSchemaCommand __RPC_FAR * This,
            /* [out][in] */ ULONG __RPC_FAR *pcSchemas,
            /* [size_is][size_is][out] */ GUID __RPC_FAR *__RPC_FAR *prgSchemas);
        
        END_INTERFACE
    } IDBSchemaCommandVtbl;

    interface IDBSchemaCommand
    {
        CONST_VTBL struct IDBSchemaCommandVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDBSchemaCommand_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDBSchemaCommand_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDBSchemaCommand_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDBSchemaCommand_GetCommand(This,pUnkOuter,rguidSchema,ppCommand)	\
    (This)->lpVtbl -> GetCommand(This,pUnkOuter,rguidSchema,ppCommand)

#define IDBSchemaCommand_GetSchemas(This,pcSchemas,prgSchemas)	\
    (This)->lpVtbl -> GetSchemas(This,pcSchemas,prgSchemas)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDBSchemaCommand_GetCommand_Proxy( 
    IDBSchemaCommand __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pUnkOuter,
    /* [in] */ REFGUID rguidSchema,
    /* [out] */ ICommand __RPC_FAR *__RPC_FAR *ppCommand);


void __RPC_STUB IDBSchemaCommand_GetCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDBSchemaCommand_GetSchemas_Proxy( 
    IDBSchemaCommand __RPC_FAR * This,
    /* [out][in] */ ULONG __RPC_FAR *pcSchemas,
    /* [size_is][size_is][out] */ GUID __RPC_FAR *__RPC_FAR *prgSchemas);


void __RPC_STUB IDBSchemaCommand_GetSchemas_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDBSchemaCommand_INTERFACE_DEFINED__ */


#ifndef __IProvideMoniker_INTERFACE_DEFINED__
#define __IProvideMoniker_INTERFACE_DEFINED__

/* interface IProvideMoniker */
/* [unique][uuid][object][local] */ 


EXTERN_C const IID IID_IProvideMoniker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0c733a4d-2a1c-11ce-ade5-00aa0044773d")
    IProvideMoniker : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMoniker( 
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppIMoniker) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IProvideMonikerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IProvideMoniker __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IProvideMoniker __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IProvideMoniker __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetMoniker )( 
            IProvideMoniker __RPC_FAR * This,
            /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppIMoniker);
        
        END_INTERFACE
    } IProvideMonikerVtbl;

    interface IProvideMoniker
    {
        CONST_VTBL struct IProvideMonikerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProvideMoniker_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IProvideMoniker_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IProvideMoniker_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IProvideMoniker_GetMoniker(This,ppIMoniker)	\
    (This)->lpVtbl -> GetMoniker(This,ppIMoniker)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IProvideMoniker_GetMoniker_Proxy( 
    IProvideMoniker __RPC_FAR * This,
    /* [out] */ IMoniker __RPC_FAR *__RPC_FAR *ppIMoniker);


void __RPC_STUB IProvideMoniker_GetMoniker_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IProvideMoniker_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_oledbdep_0360 */
/* [local] */ 

// IID_IRowsetExactScroll		= {0x0c733a7f,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetNextRowset			= {0x0c733a72,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetNewRowAfter		= {0x0c733a71,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetWithParameters	    = {0x0c733a6e,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetAsynch			    = {0x0c733a0f,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetKeys				= {0x0c733a12,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetWatchAll			= {0x0c733a73,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetWatchNotify		= {0x0c733a44,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetWatchRegion		= {0x0c733a45,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IRowsetCopyRows			= {0x0c733a6b,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IReadData				    = {0x0c733a6a,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_ICommandCost				= {0x0c733a4e,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_ICommandTree				= {0x0c733a87,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_ICommandValidate			= {0x0c733a18,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IQuery					= {0x0c733a51,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_ITableRename				= {0x0c733a77,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IDBSchemaCommand			= {0x0c733a50,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
// IID_IProvideMoniker			= {0x0c733a4d,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}}
#include <poppack.h>	// restore original structure packing


extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0360_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0360_v0_0_s_ifspec;

#ifdef OLEDBPROXY
/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */
#endif // OLEDBPROXY

#ifdef __cplusplus
}
#endif

#endif


// GUID_DEFS_ONLY

#endif
#pragma option pop /*P_O_Pop*/
