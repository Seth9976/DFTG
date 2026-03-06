// 函数名称: sub_527030
// 虚拟地址: 0x527030
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_527030(int32_t* arg1)
{
    // 第一条实际指令: if (_isspace(**arg1) != 0)
    if (_isspace(**arg1) != 0)
        int32_t i
        
        do
            void* eax_3 = *arg1
            
            if (eax_3 u>= arg1[1])
                break
            
            *arg1 = eax_3 + 1
            i = _isspace(*(eax_3 + 1))
        while (i != 0)
    
    int32_t edx = *arg1
    void* result = arg1[1]
    
    if (edx != result)
        char* eax_6 = result - 1
        arg1[1] = eax_6
        
        if (*eax_6 == 0xd)
            char* ecx = eax_6
            
            while (ecx u>= edx)
                eax_6 = &ecx[0xffffffff]
                arg1[1] = eax_6
                ecx = eax_6
                
                if (*eax_6 != 0xd)
                    break
        
        result = &eax_6[1]
        arg1[1] = result
    
    return result
}
