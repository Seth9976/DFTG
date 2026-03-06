// 函数名称: sub_4f1830
// 虚拟地址: 0x4f1830
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4f1830(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* ecx = *(arg2 + 0xc)
    int32_t* ecx = *(arg2 + 0xc)
    int32_t var_2c
    char* eax
    char const* const ecx_1
    
    if (ecx != 0)
        eax = ecx[1]
        
        if (eax == 0xa)
            eax = sub_4981f0(ecx)
            
            if (*(eax + 0x18) != 0)
                if (*(arg2 + 0x10) == 0)
                    void* eax_2 = *sub_4dd840(*arg1)
                    
                    if (*eax == 0)
                        void* ecx_3 = *(eax + 0x18)
                        *eax = 1
                        int32_t esi_1 = *(eax_2 + 0x10)
                        void* var_10_1 = ecx_3
                        int32_t i_2 = *(ecx_3 + 4)
                        int32_t i_1 = i_2
                        
                        if (i_2 s> 0)
                            int32_t ebx_2 = 0
                            int32_t i
                            
                            do
                                int32_t* edx = *(ecx_3 + 8)
                                int32_t ecx_4 = 0
                                *(edx + ebx_2 + 0x10) = 0xffffffff
                                
                                if (esi_1 s> 0)
                                    int32_t* eax_5 = *(eax_2 + 0x18) + 0x70
                                    
                                    do
                                        if (*eax_5 == *(edx + ebx_2))
                                            *(edx + ebx_2 + 0x10) = ecx_4
                                            break
                                        
                                        ecx_4 += 1
                                        eax_5 = &eax_5[0x36]
                                    while (ecx_4 s< esi_1)
                                
                                ecx_3 = var_10_1
                                ebx_2 += 0x18
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                    
                    return &eax[8]
                
                char const* const var_28_2 = "AnimSetGetClip"
                var_2c = 0x158
                ecx_1 = "pAnimSet->clipIndex == 0"
            else
                char const* const var_28_1 = "AnimSetGetClip"
                var_2c = 0x157
                ecx_1 = "pDefAnimation->animClip.pAnimImportData"
        else if (eax != 2)
            char const* const var_28_4 = "AnimSetGetClip"
            var_2c = 0x16a
            ecx_1 = "Halt"
        else
            eax = sub_4dd840(ecx)
            int32_t ecx_5 = *(arg2 + 0x10)
            
            if (ecx_5 s>= 0)
                eax = *eax
                
                if (ecx_5 s< *(eax + 0x60))
                    return *(eax + 0x68) + ecx_5 * 0x18
            
            char const* const var_28_3 = "AnimSetGetClip"
            var_2c = 0x165
            ecx_1 = "pAnimSet->clipIndex >= 0 && pAnimSet->clipIndex < 
                pAnimStructure->pStructureImportData->numAnimClips"
    else
        char const* const var_28 = "AnimSetGetClip"
        var_2c = 0x151
        ecx_1 = "pAnimSet->assetAnimOrStructure"
    
    sub_489550(eax, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\engine\animation.cpp", var_2c, 
        "AnimSetGetClip")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
