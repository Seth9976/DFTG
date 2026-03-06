// 函数名称: sub_51fc80
// 虚拟地址: 0x51fc80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __stdcallsub_51fc80(int32_t arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* ebx = arg3
    int32_t* ebx = arg3
    int32_t eax = *ebx
    int32_t var_18
    char const* const var_14_9
    int32_t eax_3
    
    if (eax == 0x1c || eax == 0x1d || eax == 0x1e || eax == 0x22 || eax == 0x23 || eax == 0x24
            || eax == 0x28 || eax == 0x29 || eax == 0x2a || eax == 0x2e || eax == 0x2f || eax == 0x30
            || eax == 0x34 || eax == 0x35 || eax == 0x36 || eax == 0x3a || eax == 0x3b || eax == 0x3c
            || eax == 0x40 || eax == 0x41 || eax == 0x42 || eax == 0x46 || eax == 0x47 || eax == 0x48)
        eax_3 = sub_4f0c50(eax, arg2, &data_624734, arg1) - 1
        
        if (eax_3 u> 3)
            var_14_9 = "GLWrapModeFromDx"
            var_18 = 0xd2c
        else
            switch (eax_3)
                case 0
                    ebx[1] = 0x2901
                    int32_t eax_44
                    eax_44.b = 1
                    return 0x2901
                case 1
                    ebx[1] = 0x8370
                    int32_t eax_45
                    eax_45.b = 1
                    return 0x8301
                case 2
                    ebx[1] = 0x812f
                    int32_t eax_46
                    eax_46.b = 1
                    return 0x8101
                case 3
                    ebx[1] = 0x812d
                    int32_t eax_47
                    eax_47.b = 1
                    return 0x8101
    else
        int32_t* eax_1
        
        if (eax == 0x21)
            if (sub_4f0bd0(arg2, eax - 2).b != 0)
                eax_1.b = 0
                return eax_1
            
            sub_4892e0("opengl material param issue: mip filter is ignored when min filter is missing")
            int32_t eax_2
            eax_2.b = 0
            return eax_2
        
        int32_t* esi_1 = arg2
        
        if (eax != 0x1f && eax != 0x25 && eax != 0x2b && eax != 0x31 && eax != 0x37 && eax != 0x3d
                && eax != 0x43 && eax != 0x49)
            goto label_51feeb
        
        eax_3 = sub_4f0c50(eax, esi_1, &data_624734, eax)
        int32_t ecx_3
        
        switch (*ebx)
            case 0x1f
                ecx_3 = 0x21
            label_51fe3e:
                int32_t eax_4 = sub_4f0c50(eax_3, esi_1, &data_624734, ecx_3)
                void* ecx_4 = data_aca1ec
                ebx[2] = 0
                
                if (*(ecx_4 + 0x21) == 0)
                    if (eax_4 != 0)
                        sub_4892e0("Material Mipmap ignored because it's not enabled in the app")
                    
                    goto label_51fe70
                
                if (eax_4 == 0)
                label_51fe70:
                    
                    if (eax_3 != 1)
                        if (eax_3 != 2)
                            goto label_520322
                        
                        ebx[1] = 0x2601
                        goto label_51feeb
                    
                    ebx[1] = 0x2600
                    goto label_51feeb
                
                if (eax_4 != 1)
                    if (eax_4 != 2)
                        sub_4892e0("opengl material param issue: invalid mip filter")
                        int32_t eax_42
                        eax_42.b = 0
                        return eax_42
                    
                    if (eax_3 == 1)
                        ebx[1] = 0x2702
                        goto label_51feeb
                    
                    if (eax_3 != 2)
                        if (eax_3 != 3)
                            goto label_520322
                        
                        ebx[2] = 1
                    
                    ebx[1] = 0x2703
                    goto label_51feeb
                
                if (eax_3 != eax_4)
                    if (eax_3 == 2)
                        ebx[1] = 0x2701
                        goto label_51feeb
                    
                label_520322:
                    sub_4892e0("opengl material param issue: invalid min filter")
                    eax_1.b = 0
                    return eax_1
                
                ebx[1] = 0x2700
            label_51feeb:
                int32_t eax_5 = *ebx
                
                if (eax_5 != 0x20 && eax_5 != 0x26 && eax_5 != 0x2c && eax_5 != 0x32 && eax_5 != 0x38
                        && eax_5 != 0x3e && eax_5 != 0x44 && eax_5 != 0x4a)
                    goto label_51ff43
                
                eax_1 = sub_4f0c50(eax_5, esi_1, &data_624734, eax_5)
                
                if (eax_1 == 1)
                    ebx[1] = 0x2600
                label_51ff43:
                    eax_1 = *ebx
                    
                    if (eax_1 != 3)
                        goto label_51ff9f
                    
                    eax_1 = sub_4f0cd0(eax_1, esi_1, &data_624734, 0x4d)
                    
                    if (eax_1.b == 0)
                        int32_t eax_6 = sub_4f0c50(eax_1, esi_1, &data_624734, 3)
                        int32_t eax_7 = sub_4f0c50(eax_6, esi_1, &data_624734, 4)
                        ebx[1] = sub_51f910(eax_6)
                        esi_1 = arg2
                        ebx[2] = sub_51f910(eax_7)
                        eax_1 = *ebx
                    label_51ff9f:
                        
                        if (eax_1 != 4)
                            if (eax_1 != 0x4e)
                                goto label_520063
                            
                            eax_1 = sub_4f0cd0(eax_1, esi_1, &data_624734, 0x4d)
                            
                            if (eax_1.b != 0)
                                int32_t eax_11 = sub_4f0c50(eax_1, esi_1, &data_624734, 3)
                                int32_t eax_12 = sub_4f0c50(eax_11, esi_1, &data_624734, 4)
                                int32_t eax_13 = sub_4f0c50(eax_12, esi_1, &data_624734, 0x4e)
                                int32_t eax_14 = sub_4f0c50(eax_13, esi_1, &data_624734, 0x4f)
                                arg3[1] = sub_51f910(eax_11)
                                ebx = arg3
                                ebx[2] = sub_51f910(eax_12)
                                ebx[3] = sub_51f910(eax_13)
                                ebx[4] = sub_51f910(eax_14)
                                eax_1 = *ebx
                            label_520063:
                                
                                if (eax_1 == 0x4f)
                                    if (sub_4f0bd0(arg2, eax_1 - 1).b == 0)
                                        sub_4892e0("opengl material param issue: dest blend alpha is "
                                        "ignored when src blend alpha is missing")
                                        int32_t eax_19
                                        eax_19.b = 0
                                        return eax_19
                                else if (eax_1 != 0x4d)
                                    if (eax_1 == 6)
                                        ebx[1] =
                                            sub_51fa60(sub_4f0c50(eax_1, arg2, &data_624734, eax_1))
                                        eax_1.b = 1
                                        return eax_1
                                    
                                    if (eax_1 != 0x17)
                                        goto label_5200fd
                                    
                                    eax_1 = sub_4f0bd0(arg2, eax_1 + 0x39)
                                    
                                    if (eax_1.b == 0)
                                        ebx[1] = sub_51f9e0(sub_4f0c50(eax_1, arg2, &data_624734, 0x17))
                                        eax_1 = *ebx
                                    label_5200fd:
                                        
                                        if (eax_1 == 0x50)
                                            int32_t eax_23 = sub_4f0c50(eax_1, arg2, &data_624734, 0x17)
                                            int32_t eax_24 =
                                                sub_4f0c50(eax_23, arg2, &data_624734, 0x50)
                                            ebx[1] = sub_51f9e0(eax_23)
                                            ebx[2] = sub_51f9e0(eax_24)
                                            eax_1 = *ebx
                                        
                                        if (eax_1 == 8)
                                            int32_t eax_27 =
                                                sub_4f0c50(eax_1, arg2, &data_624734, eax_1)
                                            char eax_28 = sub_4f0c50(eax_27, arg2, &data_624734, 7)
                                            arg3[1] = sub_51fa60(eax_27)
                                            arg3[2] = _mm_cvtepi32_ps(zx.o(eax_28)) / 255f
                                            int32_t* eax_31
                                            eax_31.b = 1
                                            return eax_31
                                        
                                        if (eax_1 != 7)
                                            if (eax_1 == 0xe || eax_1 == 0x15)
                                                int32_t eax_38 =
                                                    sub_4f0c50(eax_1, arg2, &data_624734, eax_1)
                                                int32_t eax_39 =
                                                    sub_4f0c50(eax_38, arg2, &data_624734, 0xf)
                                                int32_t eax_40 =
                                                    sub_4f0c50(eax_39, arg2, &data_624734, 0x10)
                                                int32_t eax_41 = sub_51fa60(eax_38)
                                                arg3[2] = eax_39
                                                arg3[3] = eax_40
                                                arg3[1] = eax_41
                                                eax_41.b = 1
                                                return eax_41
                                            
                                            if (eax_1 != 0xf)
                                                if (eax_1 != 0x10)
                                                    if (eax_1 == 0x11 || eax_1 == 0xb || eax_1 == 0xc
                                                            || eax_1 == 0xd || eax_1 == 0x12
                                                            || eax_1 == 0x13 || eax_1 == 0x14)
                                                        int32_t var_14_7 =
                                                            sub_4f0f70(&data_624734, eax_1)
                                                        sub_4892e0("opengl material param issue: we "
                                                        "don't support %s in opengl")
                                                        int32_t eax_37
                                                        eax_37.b = 0
                                                        return eax_37
                                                    
                                                    if (eax_1 != 0x18)
                                                        eax_1.b = 1
                                                        return eax_1
                                                    
                                                    ebx[1] =
                                                        sub_4f0d60(eax_1, arg2, &data_624734, eax_1)
                                                    int32_t* eax_35
                                                    eax_35.b = 1
                                                    return eax_35
                                                
                                                if (sub_4f0bd0(arg2, eax_1 - 2).b == 0
                                                        && sub_4f0bd0(arg2, 0x15).b == 0)
                                                    sub_4892e0("opengl material param issue: stencil "
                                                    "mask is ignored when stencil func is missing")
                                                    int32_t eax_34
                                                    eax_34.b = 0
                                                    return eax_34
                                            else if (sub_4f0bd0(arg2, eax_1 - 1).b == 0
                                                    && sub_4f0bd0(arg2, 0x15).b == 0)
                                                sub_4892e0("opengl material param issue: stencil ref is "
                                                "ignored when stencil func is missing")
                                                int32_t eax_33
                                                eax_33.b = 0
                                                return eax_33
                                        else if (sub_4f0bd0(arg2, eax_1 + 1).b == 0)
                                            sub_4892e0("opengl material param issue: alpha ref is "
                                            "ignored when alpha func is missing")
                                            int32_t eax_32
                                            eax_32.b = 0
                                            return eax_32
                        else if (sub_4f0bd0(esi_1, eax_1 - 1).b == 0)
                            sub_4892e0("opengl material param issue: dest blend is ignored when src blend is missing")
                            int32_t eax_10
                            eax_10.b = 0
                            return eax_10
                else if (eax_1 == 2)
                    ebx[1] = 0x2601
                    goto label_51ff43
                
                eax_1.b = 0
                return eax_1
            case 0x25
                ecx_3 = 0x27
                goto label_51fe3e
            case 0x2b
                ecx_3 = 0x2d
                goto label_51fe3e
            case 0x31
                ecx_3 = 0x33
                goto label_51fe3e
            case 0x37
                ecx_3 = 0x39
                goto label_51fe3e
            case 0x3d
                ecx_3 = 0x3f
                goto label_51fe3e
            case 0x43
                ecx_3 = 0x45
                goto label_51fe3e
            case 0x49
                ecx_3 = 0x4b
                goto label_51fe3e
        
        var_14_9 = "OpenGLInterface::RenderStateSpecialValueFromConstant"
        var_18 = 0xe0b
    
    sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\openglgraphics.cpp", var_18, 
        var_14_9)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
