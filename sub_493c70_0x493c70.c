// 函数名称: sub_493c70
// 虚拟地址: 0x493c70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_493c70(int32_t arg1, int128_t* arg2, float arg3 @ ecx, uint32_t arg4, int32_t arg5, int32_t arg6, uint32_t arg7)
{
    // 第一条实际指令: uint32_t ebx = arg4
    uint32_t ebx = arg4
    float eax = arg3
    
    if (*(eax i+ 0x14) != 0)
        if (ebx == 0)
            ebx = data_126cc44
            
            if (arg7 == 0)
                ebx = data_126cc40
        else if ((*(sub_48df20() + 0x1c) & 0x1000) != 0)
            ebx = data_126cc40
        
        uint32_t (* esi_1)[0x4] = sub_490100()
        int32_t edx = 0
        *esi_1 = 0
        (*esi_1)[1] = eax
        *(esi_1 + 8) = *arg2
        *(esi_1 + 0x18) = arg2[1]
        *(esi_1 + 0x28) = arg2[2]
        int128_t xmm0_4 = arg2[3]
        (*esi_1)[0x12] = ebx
        *(esi_1 + 0x38) = xmm0_4
        
        if (arg6 s> 0)
            uint32_t* edi_1 = &(*esi_1)[0x13]
            
            do
                int32_t eax_4 = *(arg5 + (edx << 2))
                edi_1 = &edi_1[1]
                edx += 1
                edi_1[-1] = eax_4
            while (edx s< arg6)
        
        esi_1[0x16][0] = arg7
        (*esi_1)[0x53] = sub_490290()
        uint32_t eax_7 = sub_490300()
        uint32_t ecx_3 = (*esi_1)[0x12]
        esi_1[0x15][0] = eax_7
        void* eax_9 = sub_4eee80(sub_4eed40(ecx_3))
        int32_t var_8_1 = *(eax i+ 0x38)
        void* eax_12 = sub_4eee80(sub_4eed40((*esi_1)[0x12]))
        int32_t* ecx_7 = *eax_12
        
        if (ecx_7[1] != 4)
            sub_489550(eax_12, &data_5b2591, "assetPtr->assetType == ASSET_TYPE_SHADER", 
                "d:\ax\trunk\ax2017\engine\shader.cpp", 0x8a, "ShaderGetDef")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(sub_4981f0(ecx_7) + 0x50) == 1)
            var_8_1 = *(eax i+ 0x40)
        
        uint32_t eax_16 = (*(*data_114ec78 + 0x6c))(var_8_1, eax_9)
        (*esi_1)[0x57] = eax_16
        
        if (data_aca6a4 == 1)
            (*esi_1)[0x55] = 0
            return eax_16
        
        float xmm6_2 = *(eax i+ 0x13c) f+ *(eax i+ 0x130)
        float xmm5_2 = *(eax i+ 0x144) f+ *(eax i+ 0x138)
        float xmm2_3 = (*(eax i+ 0x140) f+ *(eax i+ 0x134)) * 0.5f
        eax = data_aca2b8
        float xmm6_3 = xmm6_2 * 0.5f
        float xmm5_3 = xmm5_2 * 0.5f
        int128_t var_2c_1 = data_aca2a0
        int64_t xmm0_18 = data_aca2b0
        float xmm2_5 =
            xmm0_18.d - (*(arg2 + 4) * xmm2_3 + *arg2 * xmm6_3 + *(arg2 + 8) * xmm5_3 f+ *(arg2 + 0xc))
        float xmm0_20 = xmm0_18:4.d - (arg2[1].d f* xmm6_3 + *(arg2 + 0x14) * xmm2_3
            + *(arg2 + 0x18) * xmm5_3 f+ *(arg2 + 0x1c))
        float xmm1_7 = eax - (arg2[2].d f* xmm6_3 + *(arg2 + 0x24) * xmm2_3
            + *(arg2 + 0x28) * xmm5_3 f+ *(arg2 + 0x2c))
        (*esi_1)[0x55] = xmm2_5 * xmm2_5 + xmm0_20 * xmm0_20 + xmm1_7 * xmm1_7
    
    return eax
}
