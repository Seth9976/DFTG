// 函数名称: sub_5328a0
// 虚拟地址: 0x5328a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5328a0(void* arg1)
{
    // 第一条实际指令: _free(*(arg1 + 0x64))
    _free(*(arg1 + 0x64))
    _free(*(arg1 + 0x70))
    int32_t i = 0
    
    if (*(arg1 + 4) s> 0)
        do
            void* esi_1 = *(*(arg1 + 8) + (i << 2))
            _free(*(esi_1 + 0x10))
            _free(esi_1)
            i += 1
        while (i s< *(arg1 + 4))
    
    _free(*(arg1 + 8))
    int32_t i_1 = 0
    
    if (*(arg1 + 0x10) s> 0)
        do
            void* esi_2 = *(*(arg1 + 0x14) + (i_1 << 2))
            _free(*(esi_2 + 0x28))
            _free(*(esi_2 + 0x18))
            _free(esi_2)
            i_1 += 1
        while (i_1 s< *(arg1 + 0x10))
    
    _free(*(arg1 + 0x14))
    int32_t i_2 = 0
    
    if (*(arg1 + 0x1c) s> 0)
        do
            void* esi_3 = *(*(arg1 + 0x20) + (i_2 << 2))
            _free(*(esi_3 + 8))
            _free(esi_3)
            i_2 += 1
        while (i_2 s< *(arg1 + 0x1c))
    
    _free(*(arg1 + 0x20))
    int32_t i_3 = 0
    
    if (*(arg1 + 0x24) s> 0)
        do
            void* esi_4 = *(*(arg1 + 0x28) + (i_3 << 2))
            _free(*(esi_4 + 8))
            _free(esi_4)
            i_3 += 1
        while (i_3 s< *(arg1 + 0x24))
    
    _free(*(arg1 + 0x28))
    int32_t i_4 = 0
    
    if (*(arg1 + 0x2c) s> 0)
        do
            void* esi_5 = *(*(arg1 + 0x30) + (i_4 << 2))
            _free(*(esi_5 + 8))
            _free(*(esi_5 + 0x24))
            int32_t eax_6 = *(esi_5 + 0x2c)
            
            if (eax_6 != 0)
                _free(eax_6)
            
            int32_t eax_7 = *(esi_5 + 0x34)
            
            if (eax_7 != 0)
                _free(eax_7)
            
            int32_t eax_8 = *(esi_5 + 0x3c)
            
            if (eax_8 != 0)
                _free(eax_8)
            
            int32_t eax_9 = *(esi_5 + 0x44)
            
            if (eax_9 != 0)
                _free(eax_9)
            
            _free(esi_5)
            i_4 += 1
        while (i_4 s< *(arg1 + 0x2c))
    
    _free(*(arg1 + 0x30))
    _free(*(arg1 + 0x18))
    return _free(arg1)
}
