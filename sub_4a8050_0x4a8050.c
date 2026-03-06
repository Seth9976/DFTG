// 函数名称: sub_4a8050
// 虚拟地址: 0x4a8050
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4a8050(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: if (*(arg3 + 0xff4) != 0 && *(arg3 + 0xff8) == arg4 && *(arg3 + 0x112c) != 0)
    if (*(arg3 + 0xff4) != 0 && *(arg3 + 0xff8) == arg4 && *(arg3 + 0x112c) != 0)
        return arg3
    
    int32_t i = 0
    
    if (*(arg3 + 0x1190) s> 0)
        do
            if (*(sub_49e970(arg3, i) + 0xff4) == arg2)
                int32_t eax_3 = sub_4a8050(arg4)
                
                if (eax_3 != 0)
                    return eax_3
            
            i += 1
        while (i s< *(arg3 + 0x1190))
    
    return 0
}
