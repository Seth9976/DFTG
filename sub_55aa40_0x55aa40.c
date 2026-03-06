// 函数名称: sub_55aa40
// 虚拟地址: 0x55aa40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_55aa40(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg3 - 1 u<= 3)
    if (arg3 - 1 u<= 3)
        switch (arg3)
            case 1
                if (arg2 s>= 0)
                    if (arg2 s>= arg4)
                        return arg4 - 1
                    
                    return arg2
            case 2
                if (arg2 s< 0)
                    if (arg2 s< arg4)
                        return neg.d(arg2)
                    
                    return arg4 - 1
                
                if (arg2 s< arg4)
                    return arg2
                
                int32_t eax_4 = arg4 * 2
                
                if (arg2 s< eax_4)
                    return eax_4 - arg2 - 1
            case 3
                if (arg2 s>= 0)
                    return mods.dp.d(sx.q(arg2), arg4)
                
                int32_t temp1_1 = mods.dp.d(sx.q(neg.d(arg2)), arg4)
                
                if (temp1_1 == 0)
                    return temp1_1
                
                return arg4 - temp1_1
    
    return 0
}
