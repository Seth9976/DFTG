// 函数名称: sub_5267d0
// 虚拟地址: 0x5267d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_5267d0(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0xc) = *(arg1 + 8)
    *(arg1 + 0xc) = *(arg1 + 8)
    void* result
    bool cond:0
    
    while (true)
        char* ecx = *(arg1 + 8)
        result.b = *ecx
        
        if (result.b != 0x26)
            if (result.b == 0 || result.b == 0x20 || result.b == 9 || result.b == 0x3c
                    || result.b == 0x3d || result.b == 0x22 || result.b == 0x3e)
                cond:0 = ecx != *(arg1 + 0xc)
                *(arg1 + 0x10) = ecx - *(arg1 + 0xc)
                break
            
            if (result.b == 0xa)
                *(arg1 + 0x118) += 1
            
            *(arg1 + 8) = &ecx[1]
            continue
        
        *(arg1 + 8) = &ecx[1]
        
        if (ecx[1] == 0xa)
            *(arg1 + 0x118) += 1
        
        *(arg1 + 8) = &ecx[2]
        
        if (__strnicmp("amp;", &ecx[2], 4) != 0 && __strnicmp("lt;", *(arg1 + 8), 3) != 0
                && __strnicmp("gt;", *(arg1 + 8), 3) != 0 && __strnicmp("quot;", *(arg1 + 8), 5) != 0)
            result.b = 0
            return result
    
    if (cond:0)
        result.b = 1
        return result
    
    result.b = 0
    return result
}
