//
//  HIDUtilitiesAdditions.swift
//  HIDUtilitiesSwift
//
//  Created by C.W. Betts on 4/21/18.
//

import Foundation
import HIDUtilities

//HIDBuildMultiDeviceList(_ inUsagePages: UnsafePointer<UInt32>!, _ inUsages: UnsafePointer<UInt32>!, _ inNumDeviceTypes: Int32) -> Bool

public func HIDBuildMultiDeviceList(usages: [(usagePage: UInt32, usage: UInt32)]) -> Bool {
	
	return false
}
