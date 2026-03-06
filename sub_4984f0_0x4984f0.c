// 函数名称: sub_4984f0
// 虚拟地址: 0x4984f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4984f0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_1 = sub_498440(arg2)
    int32_t i_1 = sub_498440(arg2)
    int32_t* i_2 = i_1
    i_2[3] -= 1
    
    if (arg2 s> 0x400 && i_2[4] == 0xffffffff)
        if (arg1 == 0)
            return i_1
        
        return _aligned_free_base(arg1)
    
    int32_t i = i_2[1]
    
    while (i != 0)
        int32_t edx = i + 4
        i_1 = i
        i = *i
        
        if (arg1 u>= edx)
            i_1 = i_1 + 4 + i_2[2] * i_2[4]
            
            if (arg1 u< i_1)
                int32_t eax_3
                int32_t edx_1
                edx_1:eax_3 = sx.q(arg1 - edx)
                i_1 = divs.dp.d(edx_1:eax_3, i_2[4])
                
                if (mods.dp.d(edx_1:eax_3, i_2[4]) == 0)
                    int32_t eax_4 = *i_2
                    *arg1 = eax_4
                    *i_2 = arg1
                    return eax_4
    
    sub_489550(i_1, &data_5b2591, "IsPointerFromAllocator(pItem)", 
        "d:\ax\trunk\ax2017\engine\xalloc.h", 0x81, "XAllocator::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
