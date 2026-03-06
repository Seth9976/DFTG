// 函数名称: sub_41e330
// 虚拟地址: 0x41e330
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_41e330(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0xbd0)
    int32_t ebx = *(arg1 + 0xbd0)
    
    if (ebx == 0xffffffff)
        int32_t eax
        eax.b = 0
        return eax
    
    int32_t i = ebx - 1
    *arg2 = 0
    
    if (i s>= 0)
        void* ecx_2 = (i << 4) + arg1
        
        while (i s< *(arg1 + 0x960))
            if (*ecx_2 != 0)
                if (i != 0xffffffff)
                    *arg2 = 2
                
                break
            
            ecx_2 -= 0x10
            int32_t i_2 = i
            i -= 1
            
            if (i_2 - 1 s< 0)
                break
    
    int32_t i_1 = ebx + 1
    
    if (i_1 s>= 0)
        void* ecx_5 = (i_1 << 4) + arg1
        
        while (i_1 s< *(arg1 + 0x960))
            if (*ecx_5 != 0)
                if (i_1 != 0xffffffff)
                    *arg2 |= 4
                
                break
            
            ecx_5 += 0x10
            int32_t i_3 = i_1
            i_1 += 1
            
            if (i_3 + 1 s< 0)
                i_1.b = 1
                return i_1
    
    i_1.b = 1
    return i_1
}
