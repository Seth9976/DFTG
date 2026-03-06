// 函数名称: sub_436cb0
// 虚拟地址: 0x436cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_436cb0(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* result = arg1
    int32_t i = 0
    void* result_1 = result
    
    if (*(result + 0xec) s> 0)
        void* esi_1 = result + 0x110
        void* edi_1 = result + 0x10
        
        do
            _strncpy(edi_1, &data_5b2591, 0x10)
            *(edi_1 + 0xf) = 0
            int32_t eax = *esi_1
            
            if (eax != 0)
                _aligned_free_base(eax)
            
            result = result_1
            i += 1
            *esi_1 = 0
            edi_1 += 0x2c
            *(esi_1 + 8) = 0
            *(esi_1 + 0x14) = 0
            *(esi_1 + 0x10) = 0
            *(esi_1 + 0xc) = 0
            esi_1 += 0x18
        while (i s< *(result + 0xec))
    
    return result
}
