// 函数名称: sub_4a93d0
// 虚拟地址: 0x4a93d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4a93d0(void* arg1, char arg2)
{
    // 第一条实际指令: uint32_t ebx
    uint32_t ebx
    ebx.b = arg2
    int32_t* ecx = data_642620
    char var_5 = ebx.b
    char const* const var_30_3
    int32_t var_2c_1
    char const* const var_28_1
    void* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        eax = sub_4981f0(ecx)
        void* ecx_2 = *(arg1 + 0x112c)
        void* var_14_1 = eax
        
        if (ecx_2 != 0)
            eax = *(ecx_2 + 0x1190)
            int32_t edx = 0
            void* var_c_1 = eax
            
            if (eax s> 0)
                void* edi_1 = ecx_2 + 0x1194
                
                while (true)
                    int32_t ecx_3 = *edi_1
                    
                    if (ecx_3 == 0)
                    label_4a9484:
                        edx += 1
                        edi_1 += 4
                        
                        if (edx s< eax)
                            continue
                    else
                        ebx = zx.d(ecx_3.w)
                        
                        if (ebx u>= data_63e5ac)
                            goto label_4a9584
                        
                        eax = ebx * 0x1418 + data_63e5a8
                        
                        if (*(eax + 0x1410) != ecx_3)
                            goto label_4a9584
                        
                        eax = var_c_1
                        
                        if (ebx * 0x1418 + data_63e5a8 != arg1)
                            goto label_4a9484
                        
                        sub_579a90(edi_1, *(arg1 + 0x112c) + (edx << 2) + 0x1198, 
                            ((eax - edx) << 2) + 0xfffffffc)
                        void* eax_11 = *(arg1 + 0x112c)
                        *(eax_11 + 0x1190) -= 1
                        void* eax_12 = *(arg1 + 0x112c)
                        *(eax_12 + 0x1400) -= 1
                    
                    ebx.b = var_5
                    break
            
            eax = sub_49e910(arg1)
            int32_t var_c_2 = 0
            
            if (*(arg1 + 0x1190) s<= 0)
            label_4a95c5:
                *(arg1 + 0x1190) = 0
                
                if (ebx.b != 0 || *(arg1 + 0x1130) != ebx.b)
                label_4a96a7:
                    sub_4bd6d0(arg1)
                    uint32_t result = zx.d(*(arg1 + 0x1410))
                    int32_t ecx_16 = data_63e5b4
                    data_63e5b4 = result
                    *(arg1 + 0x1410) = ecx_16
                    data_63e5b8 -= 1
                    return result
                
                int32_t edi_4 = *(arg1 + 0xff8)
                
                if (edi_4 s>= 0)
                    void* eax_14 = sub_4a92c0(var_14_1, edi_4)
                    
                    if (eax_14 != 0)
                        *(eax_14 + 0x10) -= 1
                    
                    int32_t* eax_15 = sub_4cf8e0(data_12bac58, 0)
                    sub_518ab0(eax_15, eax_15, var_14_1, edi_4, &data_6218dc)
                    eax = nullptr
                    
                    while (true)
                        void* edx_6 = data_63e5a8
                        int32_t ecx_18
                        
                        while (true)
                            if (eax != 0)
                                eax += 0x1418
                            else
                                eax = edx_6
                            
                            void* ecx_14 = data_63e5ac * 0x1418 + edx_6
                            
                            if (eax u>= ecx_14)
                                goto label_4a96a7
                            
                            while ((*(eax + 0x1410) & 0xffff0000) == 0)
                                eax += 0x1418
                                
                                if (eax u>= ecx_14)
                                    goto label_4a96a7
                            
                            if (*(eax + 0xff4) == *(arg1 + 0xff4))
                                ecx_18 = *(eax + 0xff8)
                                
                                if (ecx_18 s> *(arg1 + 0xff8))
                                    break
                        
                        if (ecx_18 s<= 0)
                            break
                        
                        *(eax + 0xff8) = ecx_18 - 1
                    
                    var_28_1 = "UI2DeleteElement"
                    var_2c_1 = 0x234f
                    ecx_1 = "ui->attribItemIndex > 0"
                else
                    var_28_1 = "UI2DeleteElement"
                    var_2c_1 = 0x2348
                    ecx_1 = "el.attribItemIndex >= 0"
                
                var_30_3 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
            else
                eax = arg1 + 0x1194
                void* var_10_1 = eax
                
                while (true)
                    ebx = *eax
                    
                    if (ebx == 0)
                        var_28_1 = "DataArray<struct UI2>::DataArrayGet"
                        var_2c_1 = 0x6c
                        var_30_3 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                        ecx_1 = "id != DATAID_NULL"
                        goto label_4a9716
                    
                    uint32_t ecx_5 = zx.d(ebx.w)
                    
                    if (ecx_5 u>= data_63e5ac)
                        break
                    
                    int32_t edx_1 = data_63e5a8
                    eax = ecx_5 * 0x1418
                    
                    if (*(eax + edx_1 + 0x1410) != ebx)
                        break
                    
                    void* edi_3 = ecx_5 * 0x1418 + edx_1
                    char* const edx_2 = &data_5b2591
                    
                    if (*(edi_3 + 0x112c) != arg1)
                        var_28_1 = "UI2DeleteElement"
                        var_2c_1 = 0x233e
                        var_30_3 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
                        ecx_1 = "child.parent == &el"
                        goto label_4a9716
                    
                    char* eax_4 = *(arg1 + 0xfd8)
                    char* const ecx_6 = &data_5b2591
                    int32_t var_28_2 = var_c_2
                    
                    if (eax_4 != 0)
                        edx_2 = eax_4
                    
                    char* eax_5 = *(edi_3 + 0xfd8)
                    char* const var_2c_2 = edx_2
                    uint32_t var_30_1 = ebx
                    int32_t var_34_1 = *(edi_3 + 0xff8)
                    
                    if (eax_5 != 0)
                        ecx_6 = eax_5
                    
                    char* const var_38_1 = ecx_6
                    sub_4892e0("deleting %s %d %x (parent %s %d)")
                    ebx.b = var_5
                    int32_t edx_3
                    
                    if (ebx.b != 0 || *(arg1 + 0x1130) != ebx.b)
                        edx_3.b = 1
                    else
                        edx_3.b = 0
                    sub_4a93d0()
                    int32_t ecx_9 = var_c_2 + 1
                    var_c_2 = ecx_9
                    *var_10_1 = 0
                    eax = var_10_1 + 4
                    var_10_1 = eax
                    
                    if (ecx_9 s>= *(arg1 + 0x1190))
                        goto label_4a95c5
                
            label_4a9584:
                var_28_1 = "DataArray<struct UI2>::DataArrayGet"
                var_2c_1 = 0x6d
                var_30_3 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            var_28_1 = "UI2DeleteElement"
            var_2c_1 = 0x2322
            ecx_1 = "el.parent"
            var_30_3 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
    else
        var_28_1 = "UI2DefGet"
        var_2c_1 = 0x8ae
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
        var_30_3 = "d:\ax\trunk\ax2017\engine\ui2.cpp"
    
    label_4a9716:
    sub_489550(eax, &data_5b2591, ecx_1, var_30_3, var_2c_1, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
