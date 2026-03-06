// 函数名称: sub_4659a0
// 虚拟地址: 0x4659a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_4659a0(int32_t** arg1)
{
    // 第一条实际指令: int32_t edx = data_632564
    int32_t edx = data_632564
    
    if (edx != 0)
        uint32_t eax_1 = zx.d(edx.w)
        
        if (eax_1 u< data_62d6c8)
            int32_t* eax_3 = eax_1 * 0x8ac + data_62d6c4
            
            if (eax_3[0x22a] == edx && *eax_3 == 2)
                *arg1 = eax_3
                eax_3.b = 1
                return eax_3
    
    int32_t* esi = nullptr
    int32_t* var_8 = nullptr
    sub_481430(&data_62d6c4, &var_8)
    int32_t* eax_4 = var_8
    
    if (eax_4 != 0xffffffff)
        while (true)
            if (*eax_4 == 2 && eax_4[0x12] == 0)
                if (esi != 0)
                    break
                
                esi = eax_4
            
            sub_481430(&data_62d6c4, &var_8)
            eax_4 = var_8
            
            if (eax_4 == 0xffffffff)
                if (esi == 0)
                    break
                
                *arg1 = esi
                eax_4.b = 1
                return eax_4
    
    eax_4.b = 0
    return eax_4
}
