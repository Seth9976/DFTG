// 函数名称: sub_58aa20
// 虚拟地址: 0x58aa20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_58aa20(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t __saved_ebp
    int32_t result = __security_cookie ^ &__saved_ebp
    int32_t result_1 = result
    int32_t i = arg1
    int32_t edi
    int32_t var_10 = edi
    
    for (int32_t edi_1 = i + 4; i != edi_1; i += 4)
        result = arg2(i)
    
    @__security_check_cookie@4(result_1 ^ &__saved_ebp)
    return result
}
