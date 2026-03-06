// 函数名称: sub_4c5d50
// 虚拟地址: 0x4c5d50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4c5d50(int32_t* arg1)
{
    // 第一条实际指令: void* ecx = data_114e818
    void* ecx = data_114e818
    char result
    
    if (*(arg1 + 0x5a) == 0)
    label_4c5da7:
        
        if (arg1[0xa] != 0)
            float xmm4_1 = arg1[0xd]
            float xmm2_1 = arg1[0xe]
            float xmm3_4 = (*(ecx + 0x28) f- arg1[0xb] - 0f) / (arg1[0xc] f- 0f)
            
            if (not(0 f>= xmm3_4))
                if (xmm3_4 < 1f)
                    xmm4_1 = sub_41f140(1, xmm3_4, xmm4_1, xmm2_1)
                else
                    xmm4_1 = xmm2_1
            
            arg1[0xf] = xmm4_1
        
        void* eax_4
        float xmm0_7
        eax_4, xmm0_7 = sub_4c5840(arg1)
        float xmm1_2 = arg1[0x12]
        xmm1_2 - xmm0_7
        eax_4:1.b = (xmm1_2 == xmm0_7 ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, xmm0_7) ? 1 : 0) << 2
            | (xmm1_2 < xmm0_7 ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            int32_t* ecx_3 = data_114e834
            arg1[0x12] = xmm0_7
            int32_t* var_8_2 = ecx_3
            (*(*ecx_3 + 0x1c))(arg1, xmm0_7)
        
        (*(*data_114e834 + 0x18))(arg1)
        result = (*(*data_114e834 + 0x10))(arg1)
        
        if (result != 0)
            *(arg1 + 0x5a) = 0
            return sub_4c5580(arg1) __tailcall
    else
        int32_t eax_1 = arg1[0xa]
        
        if (eax_1 == 0 || *(ecx + 0x28) f- arg1[0xb] f< arg1[0xc])
            goto label_4c5da7
        
        if (eax_1 != 1)
            if (eax_1 == 2)
                arg1[0xf] = arg1[0xe]
                arg1[0xa] = 0
                goto label_4c5da7
            
            sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\sound.cpp", 0x292, 
                "SoundUpdateInstance")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        result = (*(*data_114e834 + 0x24))(arg1)
        *(arg1 + 0x5a) = 0
    
    return result
}
