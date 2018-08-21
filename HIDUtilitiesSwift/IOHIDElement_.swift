//
//  IOHIDElement_.swift
//  HIDUtilitiesSwift
//
//  Created by C.W. Betts on 8/20/18.
//

import Foundation
import IOKit.hid
import HIDUtilities

extension IOHIDElement {
	public var isValid: Bool {
		return HIDIsValidElement(self)
	}
	
	/// The minimum bounds for a calibrated value for this element.
	public var calibrationMin: CFIndex {
		get {
			return IOHIDElement_GetCalibrationMin(self)
		}
		set {
			IOHIDElement_SetCalibrationMin(self, newValue)
		}
	}
	
	/// The maximum bounds for a calibrated value for this element.
	public var calibrationMax: CFIndex {
		get {
			return IOHIDElement_GetCalibrationMax(self)
		}
		set {
			IOHIDElement_SetCalibrationMax(self, newValue)
		}
	}
	
	/// The mininum tolerance to be used when calibrating a logical element value.
	public var calibrationSaturationMin: CFIndex {
		get {
			return IOHIDElement_GetCalibrationSaturationMin(self)
		}
		set {
			IOHIDElement_SetCalibrationSaturationMin(self, newValue)
		}
	}
	
	/// The maximum tolerance to be used when calibrating a logical element value.
	public var calibrationSaturationMax: CFIndex {
		get {
			return IOHIDElement_GetCalibrationSaturationMax(self)
		}
		set {
			IOHIDElement_SetCalibrationSaturationMax(self, newValue)
		}
	}
	
	/// The minimum bounds near the midpoint of a logical value in which the value is ignored.
	public var calibrationDeadZoneMin: CFIndex {
		get {
			return IOHIDElement_GetCalibrationDeadZoneMin(self)
		}
		set {
			IOHIDElement_SetCalibrationDeadZoneMin(self, newValue)
		}
	}
	
	/// The maximum bounds near the midpoint of a logical value in which the value is ignored.
	public var calibrationDeadZoneMax: CFIndex {
		get {
			return IOHIDElement_GetCalibrationDeadZoneMax(self)
		}
		set {
			IOHIDElement_SetCalibrationDeadZoneMax(self, newValue)
		}
	}

	/// The level of detail returned for a calibrated element value.
	public var calibrationGranularity: double_t {
		get {
			return IOHIDElement_GetCalibrationGranularity(self)
		}
		set {
			IOHIDElement_SetCalibrationGranularity(self, newValue)
		}
	}
	
	/// Set default values for the element calibration parameters.
	public func setupCalibration() {
		IOHIDElement_SetupCalibration(self)
	}
}
