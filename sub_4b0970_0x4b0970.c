// 函数名称: sub_4b0970
// 虚拟地址: 0x4b0970
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_4b0970(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_c = arg3
    int32_t var_c = arg3
    sub_4a9e30(arg2, 0x87)
    sub_4f0ac0(0x87, arg4.b)
    sub_4a3580(arg2)
    void* result = sub_4ada50(arg2)
    int32_t i = 0
    
    if (*(arg2 + 0x1190) s> 0)
        do
            result = sub_49ea50(arg2, i)
            
            if (*(result + 0xff4) == arg3)
                result = sub_4b0970(arg4)
            
            i += 1
        while (i s< *(arg2 + 0x1190))
    
    return result
}
