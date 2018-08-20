//	    File: IOHIDDevice_.h
//	Abstract: convieance functions for IOHIDDeviceGetProperty
//	 Version: 2.0
//	
//	Disclaimer: IMPORTANT:  This Apple software is supplied to you by Apple
//	Inc. ("Apple") in consideration of your agreement to the following
//	terms, and your use, installation, modification or redistribution of
//	this Apple software constitutes acceptance of these terms.  If you do
//	not agree with these terms, please do not use, install, modify or
//	redistribute this Apple software.
//	
//	In consideration of your agreement to abide by the following terms, and
//	subject to these terms, Apple grants you a personal, non-exclusive
//	license, under Apple's copyrights in this original Apple software (the
//	"Apple Software"), to use, reproduce, modify and redistribute the Apple
//	Software, with or without modifications, in source and/or binary forms;
//	provided that if you redistribute the Apple Software in its entirety and
//	without modifications, you must retain this notice and the following
//	text and disclaimers in all such redistributions of the Apple Software.
//	Neither the name, trademarks, service marks or logos of Apple Inc. may
//	be used to endorse or promote products derived from the Apple Software
//	without specific prior written permission from Apple.  Except as
//	expressly stated in this notice, no other rights or licenses, express or
//	implied, are granted by Apple herein, including but not limited to any
//	patent rights that may be infringed by your derivative works or by other
//	works in which the Apple Software may be incorporated.
//	
//	The Apple Software is provided by Apple on an "AS IS" basis.  APPLE
//	MAKES NO WARRANTIES, EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION
//	THE IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY AND FITNESS
//	FOR A PARTICULAR PURPOSE, REGARDING THE APPLE SOFTWARE OR ITS USE AND
//	OPERATION ALONE OR IN COMBINATION WITH YOUR PRODUCTS.
//	
//	IN NO EVENT SHALL APPLE BE LIABLE FOR ANY SPECIAL, INDIRECT, INCIDENTAL
//	OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//	SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//	INTERRUPTION) ARISING IN ANY WAY OUT OF THE USE, REPRODUCTION,
//	MODIFICATION AND/OR DISTRIBUTION OF THE APPLE SOFTWARE, HOWEVER CAUSED
//	AND WHETHER UNDER THEORY OF CONTRACT, TORT (INCLUDING NEGLIGENCE),
//	STRICT LIABILITY OR OTHERWISE, EVEN IF APPLE HAS BEEN ADVISED OF THE
//	POSSIBILITY OF SUCH DAMAGE.
//	
//	Copyright (C) 2009 Apple Inc. All Rights Reserved.
//	
//*****************************************************
#ifndef __IOHIDDevice__
#define __IOHIDDevice__

//*****************************************************
#pragma mark - includes & imports

#include <AvailabilityMacros.h>
#include <ConditionalMacros.h>

#include "IOHIDLib_.h"

//*****************************************************
#if PRAGMA_ONCE
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif
	
#if PRAGMA_IMPORT
#pragma import on
#endif
	
#if PRAGMA_STRUCT_ALIGN
#pragma options align=mac68k
#elif PRAGMA_STRUCT_PACKPUSH
#pragma pack(push, 2)
#elif PRAGMA_STRUCT_PACK
#pragma pack(2)
#endif
	
	//*****************************************************
#pragma mark - typedef's, struct's, enums, defines, etc.
	//-----------------------------------------------------
	
	//*****************************************************
#pragma mark - exported globals
	//-----------------------------------------------------
	
	//*****************************************************
#pragma mark - exported function prototypes
	//-----------------------------------------------------
	
CF_IMPLICIT_BRIDGING_ENABLED

	//! @function HIDIsValidDevice( inIOHIDDeviceRef )
	//! @brief Validate this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return \c TRUE if we find the device in our (internal) device list.
	extern Boolean HIDIsValidDevice(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetTransport( inIOHIDDeviceRef )
	//! @brief Get the Transport \c CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return	the Transport \c CFString for this device.
	extern CFStringRef IOHIDDevice_GetTransport(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetVendorID( inIOHIDDeviceRef )
	//! @brief Get the vendor ID for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the vendor ID for this device.
	extern int IOHIDDevice_GetVendorID(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetVendorIDSource( inIOHIDDeviceRef )
	//! @brief Get the VendorIDSource for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return	The VendorIDSource for this device.
	extern long IOHIDDevice_GetVendorIDSource(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetProductID( inIOHIDDeviceRef )
	//! @brief get the product ID for this device.
	//! @param inIOHIDDeviceRef the \c IODHIDDeviceRef for this device.
	//! @return The product ID for this device.
	extern int IOHIDDevice_GetProductID(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetVersionNumber( inIOHIDDeviceRef )
	//! @brief Get the VersionNumber CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the VersionNumber for this device.
	extern long IOHIDDevice_GetVersionNumber(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetManufacturer( inIOHIDDeviceRef )
	//! @brief Get the Manufacturer \c CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return The Manufacturer CFString for this device.
	extern CFStringRef IOHIDDevice_GetManufacturer(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetProduct( inIOHIDDeviceRef )
	//! @brief Get the Product \c CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the Product CFString for this device.
	extern CFStringRef IOHIDDevice_GetProduct(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetSerialNumber( inIOHIDDeviceRef )
	//! @brief Get the SerialNumber \c CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the SerialNumber CFString for this device.
	extern CFStringRef IOHIDDevice_GetSerialNumber(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetCountryCode( inIOHIDDeviceRef )
	//! @brief Get the CountryCode CFString for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the CountryCode for this device.
	extern long IOHIDDevice_GetCountryCode(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetLocationID( inIOHIDDeviceRef )
	//! @brief Get the location ID for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the location ID for this device.
	extern int IOHIDDevice_GetLocationID(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetUsage( inIOHIDDeviceRef )
	//! @brief Get the usage for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the usage for this device.
	extern uint32_t IOHIDDevice_GetUsage(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetUsagePage( inIOHIDDeviceRef )
	//! @brief Get the usage page for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the usage page for this device.
	extern uint32_t IOHIDDevice_GetUsagePage(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetUsagePairs( inIOHIDDeviceRef )
	//! @brief Get the UsagePairs \c CFArray for this device
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device
	//! @return the UsagePairs for this device
	extern CFArrayRef IOHIDDevice_GetUsagePairs(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetPrimaryUsage( inIOHIDDeviceRef )
	//! @brief Get the PrimaryUsage \c uint32_t for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return The PrimaryUsage CFString for this device.
	extern uint32_t IOHIDDevice_GetPrimaryUsage(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetPrimaryUsagePage( inIOHIDDeviceRef )
	//! @brief Get the PrimaryUsagePage \c uint32_t for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the PrimaryUsagePage CFString for this device.
	extern uint32_t IOHIDDevice_GetPrimaryUsagePage(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetMaxInputReportSize( inIOHIDDeviceRef )
	//! @brief Get the MaxInputReportSize for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the MaxInputReportSize for this device.
	extern long IOHIDDevice_GetMaxInputReportSize(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetMaxOutputReportSize( inIOHIDDeviceRef )
	//! @brief Get the MaxOutputReportSize for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the MaxOutputReportSize for this device.
	extern long IOHIDDevice_GetMaxOutputReportSize(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetMaxFeatureReportSize( inIOHIDDeviceRef )
	//! @brief get the MaxFeatureReportSize for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the MaxFeatureReportSize for this device.
	extern long IOHIDDevice_GetMaxFeatureReportSize(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetReportInterval( inIOHIDDeviceRef )
	//! @brief Get the ReportInterval for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the ReportInterval for this device.
	extern long IOHIDDevice_GetReportInterval(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_GetQueue( inIOHIDDeviceRef )
	//! @brief Get the Queue for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the Queue for this device.
	extern IOHIDQueueRef IOHIDDevice_GetQueue(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_SetQueue( inIOHIDDeviceRef, inQueueRef )
	//! @brief Set the Queue for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @param inQueueRef The Queue.
	extern void IOHIDDevice_SetQueue(IOHIDDeviceRef inIOHIDDeviceRef, IOHIDQueueRef inQueueRef);
	
	//! @function IOHIDDevice_GetTransaction( inIOHIDDeviceRef )
	//! @brief Get the Transaction for this device.
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @return the Transaction for this device.
	extern IOHIDTransactionRef IOHIDDevice_GetTransaction(IOHIDDeviceRef inIOHIDDeviceRef);
	
	//! @function IOHIDDevice_SetTransaction( inIOHIDDeviceRef, inTransactionRef )
	//! @brief Set the Transaction for this device
	//! @param inIOHIDDeviceRef The \c IODHIDDeviceRef for this device.
	//! @param inTransactionRef The Transaction.
	extern void IOHIDDevice_SetTransaction(IOHIDDeviceRef inIOHIDDeviceRef, IOHIDTransactionRef inTransactionRef);

CF_IMPLICIT_BRIDGING_DISABLED

	
	//*****************************************************
#if PRAGMA_STRUCT_ALIGN
#pragma options align=reset
#elif PRAGMA_STRUCT_PACKPUSH
#pragma pack(pop)
#elif PRAGMA_STRUCT_PACK
#pragma pack()
#endif
	
#ifdef PRAGMA_IMPORT_OFF
#pragma import off
#elif PRAGMA_IMPORT
#pragma import reset
#endif
	
#ifdef __cplusplus
}
#endif

#endif  // __IOHIDDevice__ //
