// 函数名称: sub_481890
// 虚拟地址: 0x481890
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_481890(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t esi = *arg2
    int32_t esi = *arg2
    int32_t result = 0
    
    if (esi s> 0)
        while (*(arg3 + (result << 2)) != arg4)
            result += 1
            
            if (result s>= esi)
                *arg2 = esi + 1
                *(arg3 + (esi << 2)) = arg4
                return *arg2 - 1
        
        if (result != 0xffffffff)
            return result
    
    *arg2 = esi + 1
    *(arg3 + (esi << 2)) = arg4
    return *arg2 - 1
}
