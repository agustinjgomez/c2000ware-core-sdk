let DCSM_MemoryStatus = [
	{ name: "DCSM_MEMORY_INACCESSIBLE", displayName: "Inaccessible" },
	{ name: "DCSM_MEMORY_ZONE1", displayName: "Zone 1" },
	{ name: "DCSM_MEMORY_ZONE2", displayName: "Zone 2" },
	{ name: "DCSM_MEMORY_FULL_ACCESS", displayName: "Full access" },
]
let DCSM_SemaphoreZone = [
	{ name: "DCSM_FLSEM_ZONE1", displayName: "Flash semaphore Zone 1" },
	{ name: "DCSM_FLSEM_ZONE2", displayName: "Flash semaphore Zone 2" },
]
let DCSM_SecurityStatus = [
	{ name: "DCSM_STATUS_SECURE", displayName: "Secure" },
	{ name: "DCSM_STATUS_UNSECURE", displayName: "Unsecure" },
	{ name: "DCSM_STATUS_LOCKED", displayName: "Locked" },
	{ name: "DCSM_STATUS_BLOCKED", displayName: "Blocked" },
]
let DCSM_EXEOnlyStatus = [
	{ name: "DCSM_PROTECTED", displayName: "Protected" },
	{ name: "DCSM_UNPROTECTED", displayName: "Unprotected" },
	{ name: "DCSM_INCORRECT_ZONE", displayName: "Incorrect Zone" },
]
let DCSM_RAMModule = [
	{ name: "DCSM_RAMLS0", displayName: "RAMLS0" },
	{ name: "DCSM_RAMLS1", displayName: "RAMLS1" },
	{ name: "DCSM_RAMLS2", displayName: "RAMLS2" },
	{ name: "DCSM_RAMLS3", displayName: "RAMLS3" },
	{ name: "DCSM_RAMLS4", displayName: "RAMLS4" },
	{ name: "DCSM_RAMLS5", displayName: "RAMLS5" },
	{ name: "DCSM_RAMLS6", displayName: "RAMLS6" },
	{ name: "DCSM_RAMLS7", displayName: "RAMLS7" },
	{ name: "DCSM_RAMD0", displayName: "RAMD0" },
	{ name: "DCSM_RAMD1", displayName: "RAMD1" },
	{ name: "DCSM_CLA", displayName: "Offset of CLA field in in RAMSTAT divided by two" },
]
let DCSM_Sector = [
	{ name: "DCSM_SECTOR_0", displayName: "Sector 0" },
	{ name: "DCSM_SECTOR_1", displayName: "Sector 1" },
	{ name: "DCSM_SECTOR_2", displayName: "Sector 2" },
	{ name: "DCSM_SECTOR_3", displayName: "Sector 3" },
	{ name: "DCSM_SECTOR_4", displayName: "Sector 4" },
	{ name: "DCSM_SECTOR_5", displayName: "Sector 5" },
	{ name: "DCSM_SECTOR_6", displayName: "Sector 6" },
	{ name: "DCSM_SECTOR_7", displayName: "Sector 7" },
	{ name: "DCSM_SECTOR_8", displayName: "Sector 8" },
	{ name: "DCSM_SECTOR_9", displayName: "Sector 9" },
	{ name: "DCSM_SECTOR_10", displayName: "Sector 10" },
	{ name: "DCSM_SECTOR_11", displayName: "Sector 11" },
	{ name: "DCSM_SECTOR_12", displayName: "Sector 12" },
	{ name: "DCSM_SECTOR_13", displayName: "Sector 13" },
	{ name: "DCSM_SECTOR_14", displayName: "Sector 14" },
	{ name: "DCSM_SECTOR_15", displayName: "Sector 15" },
	{ name: "DCSM_SECTOR_16", displayName: "Sector 16" },
	{ name: "DCSM_SECTOR_17", displayName: "Sector 17" },
	{ name: "DCSM_SECTOR_18", displayName: "Sector 18" },
	{ name: "DCSM_SECTOR_19", displayName: "Sector 19" },
	{ name: "DCSM_SECTOR_20", displayName: "Sector 20" },
	{ name: "DCSM_SECTOR_21", displayName: "Sector 21" },
	{ name: "DCSM_SECTOR_22", displayName: "Sector 22" },
	{ name: "DCSM_SECTOR_23", displayName: "Sector 23" },
	{ name: "DCSM_SECTOR_24", displayName: "Sector 24" },
	{ name: "DCSM_SECTOR_25", displayName: "Sector 25" },
	{ name: "DCSM_SECTOR_26", displayName: "Sector 26" },
	{ name: "DCSM_SECTOR_27", displayName: "Sector 27" },
	{ name: "DCSM_SECTOR_28", displayName: "Sector 28" },
	{ name: "DCSM_SECTOR_29", displayName: "Sector 29" },
	{ name: "DCSM_SECTOR_30", displayName: "Sector 30" },
	{ name: "DCSM_SECTOR_31", displayName: "Sector 31" },
	{ name: "DCSM_SECTOR_39_32", displayName: "Sector 39-32" },
	{ name: "DCSM_SECTOR_47_40", displayName: "Sector 47-40" },
	{ name: "DCSM_SECTOR_55_48", displayName: "Sector 55-48" },
	{ name: "DCSM_SECTOR_63_56", displayName: "Sector 63-56" },
	{ name: "DCSM_SECTOR_71_64", displayName: "Sector 71-64" },
	{ name: "DCSM_SECTOR_79_72", displayName: "Sector 79-72" },
	{ name: "DCSM_SECTOR_87_80", displayName: "Sector 87-80" },
	{ name: "DCSM_SECTOR_95_88", displayName: "Sector 95-88" },
	{ name: "DCSM_SECTOR_103_96", displayName: "Sector 103-96" },
	{ name: "DCSM_SECTOR_111_104", displayName: "Sector 111-104" },
	{ name: "DCSM_SECTOR_119_112", displayName: "Sector 119-112" },
	{ name: "DCSM_SECTOR_127_120", displayName: "Sector 127-120" },
]
let DCSM_OTPLock = [
	{ name: "DCSM_OTPSECLOCK_JTAG", displayName: "JTAG Lock Status" },
	{ name: "DCSM_OTPSECLOCK_PSWDLOCK", displayName: "Zone Password Lock" },
	{ name: "DCSM_OTPSECLOCK_CRCLOCK", displayName: "Zone CRC Lock" },
]
module.exports = {
	DCSM_MemoryStatus: DCSM_MemoryStatus,
	DCSM_SemaphoreZone: DCSM_SemaphoreZone,
	DCSM_SecurityStatus: DCSM_SecurityStatus,
	DCSM_EXEOnlyStatus: DCSM_EXEOnlyStatus,
	DCSM_RAMModule: DCSM_RAMModule,
	DCSM_Sector: DCSM_Sector,
	DCSM_OTPLock: DCSM_OTPLock,
}
