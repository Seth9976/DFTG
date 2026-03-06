// 函数名称: sub_4e0a50
// 虚拟地址: 0x4e0a50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

LRESULT __stdcallsub_4e0a50(HWND arg1, uint32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_5a0877
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    POINT point
    point.y = arg3
    uint32_t esi_1 = zx.d(GetKeyState(1)) u>> 0xf
    uint32_t edi_1 = esi_1 | 2
    
    if ((GetKeyState(2) & 0x8000) == 0)
        edi_1 = esi_1
    
    uint32_t ecx_1 = edi_1 | 4
    
    if ((GetKeyState(4) & 0x8000) == 0)
        ecx_1 = edi_1
    
    if (data_114ec84 s> 0)
        ecx_1 |= 1
    
    void* eax_9 = data_114e840
    *(eax_9 + 0xc) = ecx_1
    char* Msg = arg2
    LRESULT result
    
    if (Msg u> 0x100)
        int128_t var_1ac
        int128_t var_19c
        
        if (Msg u<= 0x209)
            if (Msg u>= 0x201)
                int32_t var_14_1 = 0
                __builtin_memset(&var_1ac, 0, 0x20)
                uint32_t esi_3 = zx.d(GetKeyState(0x10)) u>> 0xf
                uint32_t edi_7 = esi_3 | 2
                
                if ((GetKeyState(0x11) & 0x8000) == 0)
                    edi_7 = esi_3
                
                uint32_t ecx_13 = edi_7 | 4
                
                if ((GetKeyState(0x12) & 0x8000) == 0)
                    ecx_13 = edi_7
                
                var_1ac:8.d = ecx_13
                float eax_27
                int32_t edx_6
                eax_27, edx_6 = sub_4e1810(sx.d(arg4.w), sx.d((arg4 u>> 0x10).w))
                var_19c.d = eax_27
                var_19c:4.d = edx_6
                
                if (arg2 - 0x201 u> 0x46)
                    sub_489550(arg2 - 0x201, &data_5b2591, "Halt", 
                        "d:\ax\trunk\ax2017\engine\windows\windowsapp.cpp", 0x195, "OnButtonMesage")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                switch (arg2)
                    case 0x201, 0x203
                        var_1ac.d = 3
                    case 0x202
                        var_1ac.d = 4
                    case 0x204, 0x206
                        var_1ac.d = 7
                    case 0x205
                        var_1ac.d = 8
                    case 0x207, 0x209
                        var_1ac.d = 5
                    case 0x208
                        var_1ac.d = 6
                
                if (data_114e818 != 0)
                    sub_4d0150(&var_1ac)
                
                int32_t var_14_2 = 1
                goto label_4e1475
            
            if (&Msg[0xfffffeff] u> 5)
                goto label_4e14d8
            
            switch (Msg)
                case 0x101, 0x105
                    sub_4e0790(&Msg[0xfffffeff], arg4, point.y, 2)
                    result = 0
                case 0x102, 0x106
                    sub_4e0790(&Msg[0xfffffeff], arg4, point.y, 0)
                    result = 0
                case 0x103
                    goto label_4e14d8
                case 0x104
                    int32_t y = point.y
                    sub_4e0790(&Msg[0xfffffeff], arg4, y, 1)
                    result = DefWindowProcW(arg1, arg2, y, arg4)
        else if (&Msg[0xfffffdf6] u> 0x3d)
        label_4e14d8:
            result = DefWindowProcW(arg1, Msg, point.y, arg4)
        else
            uint32_t eax_32 = zx.d(*(Msg + 0x4e1406))
            int32_t var_1cc
            
            switch (eax_32)
                case 0
                    int32_t var_14_10 = 9
                    __builtin_memset(&var_1ac, 0, 0x20)
                    var_1ac.d = 9
                    uint32_t esi_10 = zx.d(GetKeyState(0x10)) u>> 0xf
                    uint32_t edi_14 = esi_10 | 2
                    
                    if ((GetKeyState(0x11) & 0x8000) == 0)
                        edi_14 = esi_10
                    
                    uint32_t ecx_32 = edi_14 | 4
                    
                    if ((GetKeyState(0x12) & 0x8000) == 0)
                        ecx_32 = edi_14
                    
                    var_1ac:8.d = ecx_32
                    var_1ac:0xc.d = sx.d((point.y u>> 0x10).w)
                    float eax_70
                    int32_t edx_17
                    eax_70, edx_17 = sub_4e1810(zx.d(arg4.w), arg4 u>> 0x10)
                    var_19c.d = eax_70
                    var_19c:4.d = edx_17
                    
                    if (data_114e818 != 0)
                        sub_4d0150(&var_1ac)
                    
                    int32_t var_14_11 = 0xa
                    goto label_4e1475
                case 1, 7
                    goto label_4e14d8
                case 2
                    result = sub_4e08c0(eax_32, point.y, arg1, arg4)
                case 3
                    SetFocus(data_1150b8c)
                    int32_t y_4 = point.y
                    uint32_t eax_58 = DragQueryFileA(y_4, 0xffffffff, nullptr, 0)
                    uint32_t iFile = 0
                    
                    if (eax_58 s<= 0)
                        result = 0
                    else
                        do
                            void lpszFile
                            DragQueryFileA(y_4, iFile, &lpszFile, 0x100)
                            int32_t var_14_7 = 7
                            var_1ac = zx.o(0)
                            var_1ac.d = 0x1b
                            var_19c = zx.o(0)
                            char* ecx_22 = _mm_bsrli_si128(zx.o(0), 8)
                            var_19c:8.d = ecx_22
                            
                            if (ecx_22 == 0 || ecx_22 != &lpszFile)
                                void* esi_7 = &lpszFile
                                uint32_t eax_59
                                
                                do
                                    eax_59.b = *esi_7
                                    esi_7 += 1
                                while (eax_59.b != 0)
                                
                                void var_127
                                void* esi_8 = esi_7 - &var_127
                                
                                if (esi_7 != &var_127)
                                    sub_48a180(eax_59, esi_8, &var_19c:8, 0)
                                    sub_579300(var_19c:8.d, &lpszFile, esi_8 + 1)
                                    ecx_22 = var_19c:8.d
                                else
                                    if (data_aca1f4 != esi_8 && ecx_22 != 0 && *ecx_22 != eax_59.b)
                                        char* eax_60 = sub_48a080(&var_19c:8)
                                        int32_t temp4_1 = *(eax_60 + 4)
                                        *(eax_60 + 4) -= 1
                                        
                                        if (temp4_1 == 1)
                                            sub_4984f0(eax_60, *(eax_60 + 0xc) + 0x10)
                                    
                                    ecx_22 = &data_5b2591
                                    var_19c:8.d = &data_5b2591
                                
                                y_4 = point.y
                            
                            if (data_114e818 != 0)
                                sub_4d0150(&var_1ac)
                                ecx_22 = var_19c:8.d
                            
                            int32_t var_14_8 = 8
                            
                            if (data_aca1f4 != 0 && ecx_22 != 0 && *ecx_22 != 0)
                                char* eax_62 = sub_48a080(&var_19c:8)
                                int32_t temp3_1 = *(eax_62 + 4)
                                *(eax_62 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_4984f0(eax_62, *(eax_62 + 0xc) + 0x10)
                            
                            iFile += 1
                            int32_t var_14_9 = 0xffffffff
                        while (iFile s< eax_58)
                        
                        result = 0
                case 4
                    int32_t y_2 = point.y
                    
                    if ((y_2 u>> 0x10 & 0x2000) == 0)
                        result = 0
                    else
                        point.y = sx.d((arg4 u>> 0x10).w)
                        point.x = sx.d(arg4.w)
                        ScreenToClient(arg1, &point)
                        PhysicalToLogicalPoint(arg1, &point)
                        float eax_44
                        int32_t edx_8
                        eax_44, edx_8 = sub_4e1810(point.x, point.y)
                        int32_t eax_45 = 0
                        int32_t edx_9 = data_114ec84
                        
                        if (edx_9 s<= 0)
                            result = 0
                        else
                            int32_t* ecx_18 = &data_1150888
                            
                            while (true)
                                if (*ecx_18 == zx.d(y_2.w))
                                    int32_t eax_46 = eax_45 * 3
                                    (&data_115088c)[eax_46] = eax_44
                                    (&data_1150890)[eax_46] = edx_8
                                    result = 0
                                    break
                                
                                eax_45 += 1
                                ecx_18 = &ecx_18[3]
                                
                                if (eax_45 s>= edx_9)
                                    result = 0
                                    break
                case 5
                    int32_t y_1 = point.y
                    
                    if ((y_1 u>> 0x10 & 0x2000) == 0)
                        result = 0
                    else
                        point.y = sx.d((arg4 u>> 0x10).w)
                        point.x = sx.d(arg4.w)
                        ScreenToClient(arg1, &point)
                        PhysicalToLogicalPoint(arg1, &point)
                        float eax_38
                        int32_t edx_7
                        eax_38, edx_7 = sub_4e1810(point.x, point.y)
                        int32_t var_1c4_8
                        var_1c4_8.q = _mm_cvtps_pd(data_12baa7c)
                        var_1cc.q = _mm_cvtps_pd(edx_7)
                        int64_t var_1d4_1 = _mm_cvtps_pd(eax_38)
                        sub_4892e0("ptr down %f %f %f")
                        uint32_t esi_4 = zx.d(y_1.w)
                        var_1c4_8.q = _mm_cvtps_pd(edx_7)
                        var_1cc.q = _mm_cvtps_pd(eax_38)
                        var_1d4_1:4.d = esi_4
                        sub_4892e0("Touch Down %d (%02f %02f)")
                        
                        if (data_114ec84 != 0)
                            result = 0
                        else
                            data_114ec84 = 1
                            data_1150888 = esi_4
                            data_115088c = eax_38
                            data_1150890 = edx_7
                            __builtin_memset(&var_1ac, 0, 0x18)
                            var_19c:8.d = &data_5b2591
                            int32_t var_14_3 = 2
                            var_19c:0xc.d = 0
                            var_1ac.d = 3
                            var_19c.d = eax_38
                            var_19c:4.d = edx_7
                            sub_4d0150(&var_1ac)
                            int32_t var_14_4 = 3
                        label_4e1475:
                            
                            if (data_aca1f4 == 0)
                                result = 0
                            else
                                char* eax_71 = var_19c:8.d
                                
                                if (eax_71 != 0 && *eax_71 != 0)
                                    char* eax_72 = sub_48a080(&var_19c:8)
                                    int32_t temp2_1 = *(eax_72 + 4)
                                    *(eax_72 + 4) -= 1
                                    
                                    if (temp2_1 == 1)
                                        sub_4984f0(eax_72, *(eax_72 + 0xc) + 0x10)
                                
                                result = 0
                case 6
                    int32_t y_3 = point.y
                    
                    if ((y_3 u>> 0x10 & 0x2000) == 0)
                        result = 0
                    else
                        point.y = sx.d((arg4 u>> 0x10).w)
                        point.x = sx.d(arg4.w)
                        ScreenToClient(arg1, &point)
                        PhysicalToLogicalPoint(arg1, &point)
                        float eax_52
                        int32_t edx_10
                        eax_52, edx_10 = sub_4e1810(point.x, point.y)
                        int32_t var_1c4_14
                        var_1c4_14.q = _mm_cvtps_pd(data_12baa7c)
                        var_1cc.q = _mm_cvtps_pd(edx_10)
                        int64_t var_1d4_2 = _mm_cvtps_pd(eax_52)
                        sub_4892e0("ptr up %f %f %f")
                        int32_t edi_12 = data_114ec84
                        int32_t eax_53 = 0
                        
                        if (edi_12 s<= 0)
                            result = 0
                        else
                            int32_t* ecx_20 = &data_1150888
                            
                            do
                                if (*ecx_20 == zx.d(y_3.w))
                                    var_19c:8.d = &data_5b2591
                                    __builtin_memset(&var_1ac, 0, 0x18)
                                    int32_t var_14_5 = 4
                                    int32_t esi_6 = eax_53 * 3
                                    var_19c.d = (&data_115088c)[esi_6]
                                    var_19c:0xc.d = 0
                                    var_1ac.d = 4
                                    var_19c:4.d = (&data_1150890)[esi_6]
                                    sub_4d0150(&var_1ac)
                                    int32_t eax_55 = data_114ec84 - 1
                                    data_114ec84 = eax_55
                                    int32_t eax_56 = eax_55 * 3
                                    *((esi_6 << 2) + &data_1150888) = *((eax_56 << 2) + &data_1150888)
                                    (&data_1150890)[esi_6] = (&data_1150890)[eax_56]
                                    int32_t var_14_6 = 5
                                    goto label_4e1475
                                
                                eax_53 += 1
                                ecx_20 = &ecx_20[3]
                            while (eax_53 s< edi_12)
                            
                            result = 0
    else if (Msg == 0x100)
        sub_4e0790(eax_9, arg4, point.y, 1)
        result = 0
    else
        if (&Msg[0xfffffffe] u> 0x1a)
            goto label_4e14d8
        
        switch (Msg + &jump_table_4e153c[6]:2)
            case &lookup_table_4e1558
                PostQuitMessage(0)
                result = 0
            case &lookup_table_4e1558[1], &lookup_table_4e1558[2], &lookup_table_4e1558[7], 
                    &lookup_table_4e1558[8], &lookup_table_4e1558[9], &lookup_table_4e1558[0xa], 
                    &lookup_table_4e1558[0xb], &lookup_table_4e1558[0xc], &lookup_table_4e1558[0xf], 
                    &lookup_table_4e1558[0x10], &lookup_table_4e1558[0x11], &lookup_table_4e1558[0x13], 
                    &lookup_table_4e1558[0x14], &lookup_table_4e1558[0x15], &lookup_table_4e1558[0x16], 
                    &lookup_table_4e1558[0x17], &lookup_table_4e1558[0x18], &lookup_table_4e1558[0x19]
                goto label_4e14d8
            case &lookup_table_4e1558[3]
                if (data_114ec78 == 0)
                    result = 0
                else
                    RECT rect
                    GetClientRect(arg1, &rect)
                    int32_t bottom = rect.bottom
                    int32_t top = rect.top
                    
                    if (bottom == top)
                        (*(*data_114ec78 + 0xc))(eax_2)
                        result = 0
                    else
                        void* ecx_3 = data_aca1ec
                        int32_t eax_13 = rect.right - rect.left
                        
                        if (*(ecx_3 + 0x23) == 0)
                            uint128_t xmm0_1 = zx.o(*(ecx_3 + 0x14))
                            float xmm2_2 = _mm_cvtepi32_ps(zx.o(eax_13))
                            float xmm1_2 = _mm_cvtepi32_ps(zx.o(bottom - top))
                            *(ecx_3 + 0x18) = sub_41e140(_mm_cvtepi32_ps(xmm0_1) / (xmm2_2 / xmm1_2))
                            (*(*data_114ec78 + 0xc))(eax_2)
                            result = 0
                        else
                            *(ecx_3 + 0x14) = eax_13
                            *(ecx_3 + 0x18) = rect.bottom - rect.top
                            (*(*data_114ec78 + 0xc))(eax_2)
                            result = 0
            case &lookup_table_4e1558[4], &lookup_table_4e1558[5], &lookup_table_4e1558[6], 
                    &lookup_table_4e1558[0x12]
                result = 0
            case &lookup_table_4e1558[0xd]
                PAINTSTRUCT paint
                BeginPaint(arg1, &paint)
                EndPaint(arg1, &paint)
                result = 0
            case &lookup_table_4e1558[0xe]
                if (sub_510c70(Msg) == 0)
                    result = 0
                else
                    DestroyWindow(arg1)
                    result = 0
            case &lookup_table_4e1558[0x1a]
                void* ecx_2 = data_aca1f0
                
                if (ecx_2 == 0)
                    result = 0
                else
                    uint32_t eax_11
                    eax_11.b = point.y == 1
                    *(ecx_2 + 0x18) = eax_11.b
                    result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
