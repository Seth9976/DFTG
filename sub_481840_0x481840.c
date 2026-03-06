// 函数名称: sub_481840
// 虚拟地址: 0x481840
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_481840(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t edi = 0
    
    if (arg4 s> 0)
        do
            int32_t eax = 0
            
            if (result s> 0)
                while (*(arg3 + (eax << 2)) != *(arg2 + (edi << 2)))
                    eax += 1
                    
                    if (eax s>= result)
                        goto label_481874
            
            if (result s<= 0 || eax == 0xffffffff)
            label_481874:
                *(arg3 + (result << 2)) = *(arg2 + (edi << 2))
                result += 1
            
            edi += 1
        while (edi s< arg4)
    
    return result
}
