//
//  IOHIDDevice_.swift
//  HIDUtilitiesSwift
//
//  Created by C.W. Betts on 8/20/18.
//

import Foundation
import IOKit.hid
import HIDUtilities

extension IOHIDDevice {
	/// Is `true` if we find the device in our (internal) device list.
	public var isValid: Bool {
		return HIDIsValidDevice(self)
	}
	
	/// The Transport `String` for this device.
	public var transport: String? {
		return IOHIDDevice_GetTransport(self) as String?
	}
	
	/// Get the Manufacturer `String` for this device.
	public var manufacturer: String? {
		return IOHIDDevice_GetManufacturer(self) as String?
	}
	
	/// the Product `String` for this device.
	public var product: String? {
		return IOHIDDevice_GetProduct(self) as String?
	}
	
	/// The serial number `String` for this device.
	public var serialNumber: String? {
		return IOHIDDevice_GetSerialNumber(self) as String?
	}
	
	/// The usage pairs array for this device.
	public var usagePairs: [[String: Any]]? {
		return IOHIDDevice_GetUsagePairs(self) as NSArray? as? [[String: Any]]
	}
	
	/// Get the primary usage for this device.
	public var primaryUsage: UInt32 {
		return IOHIDDevice_GetPrimaryUsage(self)
	}
	
	/// Get the primary usage page for this device.
	public var primaryUsagePage: UInt32 {
		return IOHIDDevice_GetPrimaryUsagePage(self)
	}
	
	/// The vendor ID for this device.
	public var vendorID: Int32 {
		return IOHIDDevice_GetVendorID(self)
	}
	
	/// The product ID for this device.
	public var productID: Int32 {
		return IOHIDDevice_GetProductID(self)
	}
	
	/// The version number for this device.
	public var versionNumber: Int {
		return IOHIDDevice_GetVersionNumber(self)
	}
	
	/// The country code for this device.
	public var countryCode: Int {
		return IOHIDDevice_GetCountryCode(self)
	}
	
	/// The location ID for this device.
	public var locationID: Int32 {
		return IOHIDDevice_GetLocationID(self)
	}
	
	/// The maximum input report size for this device.
	public var maxInputReportSize: Int {
		return IOHIDDevice_GetMaxInputReportSize(self)
	}
	
	/// The maximum output report size for this device.
	public var maxOutputReportSize: Int {
		return IOHIDDevice_GetMaxOutputReportSize(self)
	}
	
	/// The maximum feature report size for this device.
	public var maxFeatureReportSize: Int {
		return IOHIDDevice_GetMaxFeatureReportSize(self)
	}
	
	/// The report interval for this device.
	public var reportInterval: Int {
		return IOHIDDevice_GetReportInterval(self)
	}
	
	/// The Queue for this device.
	public var queue: IOHIDQueue? {
		get {
			return IOHIDDevice_GetQueue(self)
		}
		set {
			IOHIDDevice_SetQueue(self, newValue)
		}
	}
	
	/// The Transaction for this device.
	public var transaction: IOHIDTransaction {
		get {
			return IOHIDDevice_GetTransaction(self)
		}
		set {
			IOHIDDevice_SetTransaction(self, newValue)
		}
	}
}

