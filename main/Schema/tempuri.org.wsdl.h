﻿
// File generated by Wsutil Compiler version 1.0092 
// This file defines C/C++ functions, callbacks, types that correspond to operations,
// and types specified in WSDL and XSD files processed by WsUtil compiler. The generated 
// type definitions, function and callback declarations can be used with various 
// Web Services APIs either in applications that send and receive requests to and 
// from a running web service, or in the implementation of web services, or in both. 
//
// If Wsutil has generated this file from a WSDL file, the file may contain up to three 
// sets of C/C++ definitions. The first set consists of function declarations that can be 
// used in calling operations on a running web service from client applications. 
// The second set consists of callback declarations that can be used in the 
// implementation of web services.  
// The third set contains definitions C/C++ structures that are used for serialization of 
// C/C++ types to schema types defined in the WSDL file.
//
// The set of function declarations for web services clients may contain the 
// following declaration: 
//
//    HRESULT WINAPI DefaultBinding_ICalculator_Add(
//       __in WS_SERVICE_PROXY* _serviceProxy,
//       __in int a, 
//       __in int b, 
//       __out int* result, 
//       __in WS_HEAP* _heap,
//       __in_opt WS_CALL_PROPERTY* _callProperties,
//       __in const ULONG _callPropertyCount,
//       __in_opt const WS_ASYNC_CONTEXT*_asyncContext,
//       __in_opt WS_ERROR* _error);
//
// This function can be called from an application code to request ICalculator web 
// service to perform operation Add using two integers a and b as input data.
// Once the web service processes this request and sends the result back,
// the result is returned to the caller of this function in the "result" parameter.
// A WS_SERVICE_PROXY must be created using WsCreateServiceProxy() function
// before this proxy function can be invoked.
//
// The set of callbacks for implementation of web services may contain the following 
// definition of a callback: 
//
//    typedef HRESULT (CALLBACK* DefaultBinding_ICalculator_AddCallback) (
//       __in const WS_OPERATION_CONTEXT* _context,
//       __in int a, 
//       __in int b, 
//       __out int* result, 
//       __in const WS_ASYNC_CONTEXT* _asyncContext,
//       __in WS_ERROR* _error); 
//
//    typedef struct DefaultBinding_ICalculatorFunctionTable 
//    {
//         DefaultBinding_ICalculator_AddCallback DefaultBinding_ICalculator_Add;
//    } DefaultBinding_ICalculatorFunctionTable;
//
// This definition can be used to implement a function that defines the Add operation 
// as a part of an ICalculator web service. Once this callback is implemented and 
// the web service is deployed and running, if a client applications attempts to 
// execute the operation Add, the implementation of this callback is called and 
// it receives two integers a and b as input data and it returns a third integer 
// that is the result of the operation. A WS_SERVICE_ENDPOINT must be filled out, 
// and its contract field set to instance of such a function table.  
// WsCreateServiceHost may then be used to register the endpoint as a service.
// 
// The set with definitions of C/C++ structures may contain a definition of the following 
// structure:
//    typedef struct ContactInfo 
//    {
//			WCHAR*  name;
//			WCHAR*  email;
//			__int64 contactID;
//	  } ContactInfo;
//
// This structure corresponds to the following complex type defined in the WSDL file:
//    <s:complexType name="ContactInfo">
//      <s:sequence>
//        <s:element minOccurs="1" maxOccurs="1" name="name" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="email" type="s:string" />
//        <s:element minOccurs="1" maxOccurs="1" name="contactID" type="s:long" />
//      </s:sequence>
//    </s:complexType>
//
// For more information about content of this file, please see the documentation for
// Wsutil compiler.
// If Wsutil generates this file from a WSDL file and policy processing is enabled using
// policy switch, the file may contain declaration of functions that can be used 
// for creating a proxy to a web service or an endpoint of a web service. 
// For example, the file may contain declaration of the following function:
//
//    HRESULT DefaultBinding_ICalculator_CreateServiceProxy(
//    __in WS_HTTP_SSL_BINDING_TEMPLATE* templateValue,
//    __in_ecount_opt(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
//    __in const ULONG proxyPropertyCount,
//    __deref_out_opt WS_SERVICE_PROXY** proxy,
//    __in_opt WS_ERROR* error);
//
// This function can be called from application code to create a service
// proxy object. A service proxy must be created before any request can be sent 
// to the web service.
//
// Also, the file may contain declaration of the following function :
//
//    HRESULT DefaultBinding_ICalculator_CreateServiceEndpoint(
//    __in WS_HTTP_SSL_BINDING_TEMPLATE* templateValue,
//    __in_opt WS_STRING address,
//    __in_opt struct DefaultBinding_ICalculatorFunctionTable* functionTable,
//    __in_opt WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
//    __in_ecount_opt(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
//    __in const ULONG endpointPropertyCount,
//    __in WS_HEAP* heap,
//    __deref_out_opt WS_SERVICE_ENDPOINT** serviceEndpoint,
//    __in_opt WS_ERROR* error);
//
// This function can be used to create a Service Host object, which has to be 
// created before a web services starts receiving requests from its clients.
//
// For more information about content of this file, please see the documentation for
// Wsutil compiler.
#if _MSC_VER > 1000 
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

// The following client functions were generated:

//     NetTcpBinding_IProfilerCommunication_Started
//     NetTcpBinding_IProfilerCommunication_TrackAssembly
//     NetTcpBinding_IProfilerCommunication_Stopping

// The following server function tables were generated:

//     struct NetTcpBinding_IProfilerCommunicationFunctionTable

// the following policy helpers were generated:

//  NetTcpBinding_IProfilerCommunication_CreateServiceProxy;
//  NetTcpBinding_IProfilerCommunication_CreateServiceEndpoint;

// The following header files must be included in this order before this one

// #include <WebServices.h>
// #include "opencover.profiler.xsd.h"
// #include "opencover.profiler.wsdl.h"

////////////////////////////////////////////////
// Policy helper routines
////////////////////////////////////////////////

//  WS_CHANNEL_PROPERTY_ENCODING = WS_ENCODING_XML_BINARY_SESSION_1,
//  WS_CHANNEL_PROPERTY_ADDRESSING_VERSION = WS_ADDRESSING_VERSION_1_0,
//  WS_ENVELOPE_VERSION = WS_ENVELOPE_VERSION_SOAP_1_2,
// channel type: WS_CHANNEL_TYPE_DUPLEX_SESSION 

HRESULT NetTcpBinding_IProfilerCommunication_CreateServiceProxy(
    __in_opt WS_TCP_BINDING_TEMPLATE* templateValue,
    __in_ecount_opt(proxyPropertyCount) const WS_PROXY_PROPERTY* proxyProperties,
    __in const ULONG proxyPropertyCount,
    __deref_out_opt WS_SERVICE_PROXY** _serviceProxy,
    __in_opt WS_ERROR* error);

struct NetTcpBinding_IProfilerCommunicationFunctionTable;
HRESULT NetTcpBinding_IProfilerCommunication_CreateServiceEndpoint(
    __in_opt WS_TCP_BINDING_TEMPLATE* templateValue,
    __in_opt CONST WS_STRING* address,
    __in_opt struct NetTcpBinding_IProfilerCommunicationFunctionTable* functionTable,
    __in_opt WS_SERVICE_SECURITY_CALLBACK authorizationCallback,
    __in_ecount_opt(endpointPropertyCount) WS_SERVICE_ENDPOINT_PROPERTY* endpointProperties,
    __in const ULONG endpointPropertyCount,
    __in WS_HEAP* heap,
    __deref_out_opt WS_SERVICE_ENDPOINT** serviceEndpoint,
    __in_opt WS_ERROR* error);

////////////////////////////////////////////////
// Client functions definitions
////////////////////////////////////////////////

// operation: NetTcpBinding_IProfilerCommunication_Started
HRESULT WINAPI NetTcpBinding_IProfilerCommunication_Started(
    __in WS_SERVICE_PROXY* _serviceProxy,
    __in WS_HEAP* _heap,
    __in_ecount_opt(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    __in const ULONG _callPropertyCount,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

// operation: NetTcpBinding_IProfilerCommunication_TrackAssembly
HRESULT WINAPI NetTcpBinding_IProfilerCommunication_TrackAssembly(
    __in WS_SERVICE_PROXY* _serviceProxy,
    __in_opt __nullterminated WCHAR* moduleName, 
    __in_opt __nullterminated WCHAR* assemblyName, 
    __out BOOL* TrackAssemblyResult, 
    __in WS_HEAP* _heap,
    __in_ecount_opt(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    __in const ULONG _callPropertyCount,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

// operation: NetTcpBinding_IProfilerCommunication_Stopping
HRESULT WINAPI NetTcpBinding_IProfilerCommunication_Stopping(
    __in WS_SERVICE_PROXY* _serviceProxy,
    __in WS_HEAP* _heap,
    __in_ecount_opt(_callPropertyCount) const WS_CALL_PROPERTY* _callProperties,
    __in const ULONG _callPropertyCount,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

////////////////////////////////////////////////
// Service functions definitions
////////////////////////////////////////////////

typedef HRESULT (CALLBACK* NetTcpBinding_IProfilerCommunication_StartedCallback) (
    __in const WS_OPERATION_CONTEXT* _context,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

typedef HRESULT (CALLBACK* NetTcpBinding_IProfilerCommunication_TrackAssemblyCallback) (
    __in const WS_OPERATION_CONTEXT* _context,
    __in_opt __nullterminated WCHAR* moduleName, 
    __in_opt __nullterminated WCHAR* assemblyName, 
    __out BOOL* TrackAssemblyResult, 
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

typedef HRESULT (CALLBACK* NetTcpBinding_IProfilerCommunication_StoppingCallback) (
    __in const WS_OPERATION_CONTEXT* _context,
    __in_opt const WS_ASYNC_CONTEXT* _asyncContext,
    __in_opt WS_ERROR* _error);

// binding: NetTcpBinding_IProfilerCommunication
typedef struct NetTcpBinding_IProfilerCommunicationFunctionTable 
{
    NetTcpBinding_IProfilerCommunication_StartedCallback NetTcpBinding_IProfilerCommunication_Started;
    NetTcpBinding_IProfilerCommunication_TrackAssemblyCallback NetTcpBinding_IProfilerCommunication_TrackAssembly;
    NetTcpBinding_IProfilerCommunication_StoppingCallback NetTcpBinding_IProfilerCommunication_Stopping;
} NetTcpBinding_IProfilerCommunicationFunctionTable;

////////////////////////////////////////////////
// Global web service descriptions.
////////////////////////////////////////////////

typedef struct _tempuri_org_wsdl
{
    struct // contracts
    {
        // binding: NetTcpBinding_IProfilerCommunication
        // portType: IProfilerCommunication
        // operation: NetTcpBinding_IProfilerCommunication_Started
        //     input message: IProfilerCommunication_Started_InputMessage
        //     output message: IProfilerCommunication_Started_OutputMessage
        // operation: NetTcpBinding_IProfilerCommunication_TrackAssembly
        //     input message: IProfilerCommunication_TrackAssembly_InputMessage
        //     output message: IProfilerCommunication_TrackAssembly_OutputMessage
        // operation: NetTcpBinding_IProfilerCommunication_Stopping
        //     input message: IProfilerCommunication_Stopping_InputMessage
        //     output message: IProfilerCommunication_Stopping_OutputMessage
        // contractDescription: tempuri_org_wsdl.contracts.NetTcpBinding_IProfilerCommunication
        WS_CONTRACT_DESCRIPTION NetTcpBinding_IProfilerCommunication;
        
    } contracts;
    struct // policies
    {
        // policy for binding: NetTcpBinding_IProfilerCommunication
        // port name: NetTcpBinding_IProfilerCommunication, binding: NetTcpBinding_IProfilerCommunication, namespace: http://tempuri.org/
        WS_TCP_POLICY_DESCRIPTION NetTcpBinding_IProfilerCommunication;
    } policies;
    struct
    { // endpointReferences
        struct
        {  // NetTcpBinding_IProfilerCommunication
            WS_ENDPOINT_ADDRESS_DESCRIPTION endpointAddressDescription;
            WS_XML_STRING* endpointReferenceString;
        } NetTcpBinding_IProfilerCommunication;  // endof NetTcpBinding_IProfilerCommunication
    } endpointReferences;  // endof endpointReferences 
} _tempuri_org_wsdl;

extern const _tempuri_org_wsdl tempuri_org_wsdl;

#ifdef __cplusplus
}
#endif

