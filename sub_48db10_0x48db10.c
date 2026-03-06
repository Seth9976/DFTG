// 函数名称: sub_48db10
// 虚拟地址: 0x48db10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_48db10(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = sub_4892e0("co destroy")
    int32_t eax = sub_4892e0("co destroy")
    int32_t* ecx = *arg1
    int32_t var_c
    char const* const ecx_1
    
    if (ecx != 0)
        if (data_aca1e8 == 0)
            sub_48da70(ecx)
            *arg1 = 0
            return sub_4892e0("co destroy complete")
        
        char const* const var_8_1 = "co_destroy"
        var_c = 0x199
        ecx_1 = "g_current_coroutine == NULL"
    else
        char const* const var_8 = "co_destroy"
        var_c = 0x198
        ecx_1 = "handle != NULL"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\coroutine.cpp", var_c, "co_destroy")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
