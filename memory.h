#ifndef _MEMORY_H
#define _MEMORY_H

#include "stm32f30x.h"

#define FLASH_UNLOCK_KEY1	0x45670123
#define	FLASH_UNLOCK_KEY2	0xCDEF89AB
#define FLASH_TIMEOUT		1000

#define FLASH_MEMORYMAP_BASE_ADDR	0x08008000		/*is also the beginning of the used page 16*/

/*Important: Do NOT change the data types of the map or add one that is different!*/
typedef struct
{
    __IO	uint32_t 		data0;
  	__IO	uint32_t 		data1;
  	__IO	uint32_t 		data2;
  	__IO	uint32_t 		data3;
	/*TextBlock */
	__IO	uint32_t		Textblock[16];
} MemoryMap;


void MemMap_WriteAllEntriesToFlash(StaticMemoryMap* map, uint32_t size);
void MemMap_ReadAllEntriesFromFlash(StaticMemoryMap* map, uint32_t size);

#endif
