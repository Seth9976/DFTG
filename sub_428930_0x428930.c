// 函数名称: sub_428930
// 虚拟地址: 0x428930
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __convention("regparm")sub_428930(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_14 = 0xffffffff
    int32_t var_14 = 0xffffffff
    int32_t eax = sub_4a8570(arg3)
    void* esi = data_6cfe4c
    
    if (esi == 0)
        sub_489550(eax, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    *((arg2 << 2) + &data_6d00c0) = arg4
    void* esi_1 = esi + (arg4 << 4)
    sub_4a8930(esi_1 + 0x2c, &data_62b4f0, arg3, esi_1 + 0x2c, arg2)
    int32_t i = 0
    void* result = sub_426fb0() + 0x20
    
    do
        if (*(result - 4) == 1 && *result == *(esi_1 + 0x28))
            int32_t var_14_2 = arg2
            return sub_4a8570(arg3)
        
        i += 1
        result += 0x2c
    while (i s< 5)
    
    return result
}
