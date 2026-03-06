// 函数名称: sub_48af30
// 虚拟地址: 0x48af30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_48af30(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx = arg1[2]
    int32_t ecx = arg1[2]
    
    if (arg2 s<= ecx)
        return 
    
    int32_t var_14_1
    int32_t eax
    char const* const ecx_1
    
    if (arg1[1] s> arg2)
        char const* const var_10_1 = "ResizableBufferSetAllocatedLength"
        var_14_1 = 0x2a
        ecx_1 = "buffer.dataLength <= size"
    label_48afc2:
        sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\network.cpp", var_14_1, 
            "ResizableBufferSetAllocatedLength")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    eax = *arg1
    
    if (ecx == 0)
        if (eax == 0)
            *arg1 = sub_498490(arg2)
            arg1[2] = arg2
            return 
        
        char const* const var_10_2 = "ResizableBufferSetAllocatedLength"
        var_14_1 = 0x33
        ecx_1 = "buffer.dataPtr == NULL"
        goto label_48afc2
    
    if (eax == 0)
        char const* const var_10_4 = "ResizableBufferSetAllocatedLength"
        var_14_1 = 0x39
        ecx_1 = "buffer.dataPtr != NULL"
        goto label_48afc2
    
    uint32_t (* eax_2)[0x4] = sub_498490(arg2)
    void* eax_3 = arg1[1]
    
    if (eax_3 s> 0)
        sub_579300(eax_2, *arg1, eax_3)
    
    sub_4984f0(*arg1, arg1[2])
    *arg1 = eax_2
    arg1[2] = arg2
}
