//
//  HIDUtilitiesAdditions.swift
//  HIDUtilitiesSwift
//
//  Created by C.W. Betts on 4/21/18.
//

import Foundation
import HIDUtilities

public func HIDBuildMultiDeviceList(usages: [(usagePage: UInt32, usage: UInt32)]) -> Bool {
	guard let count = Int32(exactly: usages.count) else {
		return false
	}
	let inUsagePages = usages.map({$0.usagePage})
	let inUsages = usages.map({$0.usage})
	return HIDBuildMultiDeviceList(inUsagePages, inUsages, count)
}
