// 函数名称: sub_51ccc0
// 虚拟地址: 0x51ccc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_51ccc0(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x4240) != 0)
    if (*(arg1 + 0x4240) != 0)
        sub_5231b0(arg1 + 0x4240)
        int32_t eax = *(arg1 + 0x4240)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        __builtin_memset(arg1 + 0x4240, 0, 0x14)
        *(arg1 + 0x4258) = 0
    
    if (*(arg1 + 4) != 0)
        wglMakeCurrent(nullptr, nullptr)
        wglDeleteContext(*(arg1 + 4))
        HDC hDC = *(arg1 + 8)
        *(arg1 + 4) = 0
        ReleaseDC(*(arg1 + 0xc), hDC)
        *(arg1 + 8) = 0
    
    int32_t* ecx_1 = data_1151adc
    
    if (ecx_1 != 0)
        sub_4984f0(ecx_1, 0x5040)
        data_1151adc = 0
}
