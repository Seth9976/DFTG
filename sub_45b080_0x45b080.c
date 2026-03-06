// 函数名称: sub_45b080
// 虚拟地址: 0x45b080
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_45b080(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = data_6cfe4c
    void* result = data_6cfe4c
    char const* const var_1c
    int32_t var_18
    char const* const var_14_1
    char* ecx
    
    if (result != 0)
        if (arg3 != *(result + 0xa68))
            return result
        
        if (arg2 s< arg4)
            int32_t var_14_2 = (arg4 - arg2) << 2
            return sub_45ad50(arg3, *sub_436a20(sub_425de0(), arg3) + (arg2 << 2))
        
        var_14_1 = "OnNotifyPartialMove"
        var_18 = 0x23e5
        var_1c = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "pos < size"
    else
        var_14_1 = "GetClient"
        var_18 = 0x75
        var_1c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    
    sub_489550(result, &data_5b2591, ecx, var_1c, var_18, var_14_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
