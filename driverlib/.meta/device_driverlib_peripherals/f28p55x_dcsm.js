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
	{ name: "DCSM_RAMLS8", displayName: "RAMLS8" },
	{ name: "DCSM_RAMLS9", displayName: "RAMLS9" },
	{ name: "DCSM_CLA", displayName: "Offset of CLA field in in RAMSTAT divided by two" },
]
let DCSM_Sector = [
	{ name: "DCSM_BANK0_SECTOR_0", displayName: "Bank 0 - Sector 0" },
	{ name: "DCSM_BANK0_SECTOR_1", displayName: "Bank 0 - Sector 1" },
	{ name: "DCSM_BANK0_SECTOR_2", displayName: "Bank 0 - Sector 2" },
	{ name: "DCSM_BANK0_SECTOR_3", displayName: "Bank 0 - Sector 3" },
	{ name: "DCSM_BANK0_SECTOR_31_4", displayName: "Bank 0 - Sector 31-4" },
	{ name: "DCSM_BANK0_SECTOR_63_32", displayName: "Bank 0 - Sector 63-32" },
	{ name: "DCSM_BANK0_SECTOR_95_64", displayName: "Bank 0 - Sector 95-64" },
	{ name: "DCSM_BANK0_SECTOR_127_96", displayName: "Bank 0 - Sector 127-96" },
	{ name: "DCSM_BANK1_SECTOR_0", displayName: "Bank 1 - Sector 0" },
	{ name: "DCSM_BANK1_SECTOR_1", displayName: "Bank 1 - Sector 1" },
	{ name: "DCSM_BANK1_SECTOR_2", displayName: "Bank 1 - Sector 2" },
	{ name: "DCSM_BANK1_SECTOR_3", displayName: "Bank 1 - Sector 3" },
	{ name: "DCSM_BANK1_SECTOR_31_4", displayName: "Bank 1 - Sector 31-4" },
	{ name: "DCSM_BANK1_SECTOR_63_32", displayName: "Bank 1 - Sector 63-32" },
	{ name: "DCSM_BANK1_SECTOR_95_64", displayName: "Bank 1 - Sector 95-64" },
	{ name: "DCSM_BANK1_SECTOR_127_96", displayName: "Bank 1 - Sector 127-96" },
	{ name: "DCSM_BANK2_SECTOR_0", displayName: "Bank 2 - Sector 0" },
	{ name: "DCSM_BANK2_SECTOR_1", displayName: "Bank 2 - Sector 1" },
	{ name: "DCSM_BANK2_SECTOR_2", displayName: "Bank 2 - Sector 2" },
	{ name: "DCSM_BANK2_SECTOR_3", displayName: "Bank 2 - Sector 3" },
	{ name: "DCSM_BANK2_SECTOR_31_4", displayName: "Bank 2 - Sector 31-4" },
	{ name: "DCSM_BANK2_SECTOR_63_32", displayName: "Bank 2 - Sector 63-32" },
	{ name: "DCSM_BANK2_SECTOR_95_64", displayName: "Bank 2 - Sector 95-64" },
	{ name: "DCSM_BANK2_SECTOR_127_96", displayName: "Bank 2 - Sector 127-96" },
	{ name: "DCSM_BANK3_SECTOR_0", displayName: "Bank 3 - Sector 0" },
	{ name: "DCSM_BANK3_SECTOR_1", displayName: "Bank 3 - Sector 1" },
	{ name: "DCSM_BANK3_SECTOR_2", displayName: "Bank 3 - Sector 2" },
	{ name: "DCSM_BANK3_SECTOR_3", displayName: "Bank 3 - Sector 3" },
	{ name: "DCSM_BANK3_SECTOR_31_4", displayName: "Bank 3 - Sector 31-4" },
	{ name: "DCSM_BANK3_SECTOR_63_32", displayName: "Bank 3 - Sector 63-32" },
	{ name: "DCSM_BANK3_SECTOR_95_64", displayName: "Bank 3 - Sector 95-64" },
	{ name: "DCSM_BANK3_SECTOR_127_96", displayName: "Bank 3 - Sector 127-96" },
	{ name: "DCSM_BANK4_SECTOR_0", displayName: "Bank 4 - Sector 0" },
	{ name: "DCSM_BANK4_SECTOR_1", displayName: "Bank 4 - Sector 1" },
	{ name: "DCSM_BANK4_SECTOR_2", displayName: "Bank 4 - Sector 2" },
	{ name: "DCSM_BANK4_SECTOR_3", displayName: "Bank 4 - Sector 3" },
	{ name: "DCSM_BANK4_SECTOR_31_4", displayName: "Bank 4 - Sector 31-4" },
]
let DCSM_OTPLock = [
	{ name: "DCSM_OTPSECLOCK_JTAG", displayName: "JTAG Lock Status" },
	{ name: "DCSM_OTPSECLOCK_PSWDLOCK", displayName: "Zone Password Lock" },
	{ name: "DCSM_OTPSECLOCK_CRCLOCK", displayName: "Zone CRC Lock" },
]
let DCSM_PERSem = [
	{ name: "DCSM_GRABWD", displayName: "Grab Watchdog configuration" },
	{ name: "DCSM_GRABNMIWD", displayName: "Grab NMIWD configuration" },
	{ name: "DCSM_GRABTIMER1", displayName: "Grab TIMER1 configuration" },
	{ name: "DCSM_GRABCLKCTL", displayName: "Grab Clock configuration" },
	{ name: "DCSM_GRABRSTCTL", displayName: "Grab Reset configuration" },
]
module.exports = {
	DCSM_MemoryStatus: DCSM_MemoryStatus,
	DCSM_SemaphoreZone: DCSM_SemaphoreZone,
	DCSM_SecurityStatus: DCSM_SecurityStatus,
	DCSM_EXEOnlyStatus: DCSM_EXEOnlyStatus,
	DCSM_RAMModule: DCSM_RAMModule,
	DCSM_Sector: DCSM_Sector,
	DCSM_OTPLock: DCSM_OTPLock,
	DCSM_PERSem: DCSM_PERSem,
}