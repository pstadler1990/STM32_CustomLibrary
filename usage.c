MemoryMap map;

static const uint32_t memoryMapSize = sizeof(map) / sizeof(uint32_t);

/*Assign some values to the memory map*/
map.data0 = 1;
map.data1 = 2;
map.data2 = 3;

/*Store map to flash*/
MemMap_WriteAllEntriesToFlash(&map, memoryMapSize);
/*Change a value to see if the store and restore was correct*/
map.data1 = 9;
/*Read map from flash*/
MemMap_ReadAllEntriesFromFlash(&map, memoryMapSize);
/*map.data1 is now 2 again, as we restored it from the flash*/
