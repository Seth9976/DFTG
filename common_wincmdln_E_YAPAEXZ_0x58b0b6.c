// 函数名称: ??$common_wincmdln@E@@YAPAEXZ
// 虚拟地址: 0x58b0b6
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*??$common_wincmdln@E@@YAPAEXZ()
{
    // 第一条实际指令: ___acrt_initialize_multibyte()
    ___acrt_initialize_multibyte()
    void* result = data_6cfe0c
    
    if (result == 0)
        result = &data_6cfa00
    
    int32_t ebx
    ebx.b = 0
    
    while (true)
        int32_t eax
        eax.b = *result
        
        if (eax.b u<= 0x20)
            if (eax.b == 0)
                return result
            
            if (ebx.b == 0)
                while (eax.b u<= 0x20)
                    result += 1
                    eax.b = *result
                    
                    if (eax.b == 0)
                        break
                
                return result
        
        if (eax.b == 0x22)
            ebx.b = ebx.b == 0
        
        if (__ismbblead(eax.b) != 0)
            result += 1
        
        result += 1
}
