// 函数名称: sub_444430
// 虚拟地址: 0x444430
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __convention("regparm")sub_444430(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t edi = *(arg3 + 4)
    int32_t edi = *(arg3 + 4)
    int32_t ebx = arg2
    
    if (edi == 0)
        return 
    
    int32_t var_18
    char const* const ecx
    
    if (data_632a00 == 0)
        char const* const var_14 = "NotifyUI"
        var_18 = 0x72e5
        ecx = "gRollClient.threadRunning"
    label_444511:
        sub_489550(arg1, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_18, 
            "NotifyUI")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax = data_632810
    arg2.b = 0
    
    if (eax != 1)
        arg2 = 0
        
        if (eax != 0)
            arg2 = 1
        
        if (data_632814 == 2 && arg4 == data_632818
                && *(arg4 * 0x1bc + data_632804 + 0x1c4) s>= data_63281c)
            data_632810 = 1
            arg2.b = 0
    
    arg1 = data_a9fb78
    
    if (arg1 s>= 0x13b8)
        char const* const var_14_1 = "NotifyUI"
        var_18 = 0x7300
        ecx = "pn.numNotifies < MAX_NOTIFIES"
        goto label_444511
    
    data_a9fb78 = arg1 + 1
    *((arg1 << 5) + 0xa78484) = arg5
    *((arg1 << 5) + 0xa78488) = arg6
    *((arg1 << 5) + 0xa7848c) = arg7
    *((arg1 << 5) + 0xa78478) = edi
    *((arg1 << 5) + 0xa7847c) = ebx
    *((arg1 << 5) + 0xa78480) = arg4
    *((arg1 << 5) + 0xa78490) = arg8
    *((arg1 << 5) + 0xa78494) = arg2.b
}
