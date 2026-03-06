// 函数名称: sub_519cd0
// 虚拟地址: 0x519cd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_519cd0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) =
        __ehhandler$?_Endwrite@?$basic_filebuf@_WU?$char_traits@_W@std@@@std@@IAE_NXZ
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_b8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = data_1151ad8
    
    if (result != 0)
        if (*(result + 4) != 0x20)
            data_aca230 = 0xff000000
            float var_84[0x6]
            float* eax_3 = sub_5191b0(&var_84)
            int128_t var_4c = *eax_3
            int128_t var_3c_1 = *(eax_3 + 0x10)
            int128_t var_2c_1 = *(eax_3 + 0x20)
            int64_t var_1c_1 = *(eax_3 + 0x30)
            sub_492b90(&var_4c)
            sub_4922b0(0x3f333333)
            sub_492260(0x3e7)
            
            if (data_1151aec == 2)
                sub_4c1630()
            
            void* eax_4 = data_1151ad8
            
            if (*(eax_4 + 4) == 0x1e)
                sub_54e310()
                eax_4 = data_1151ad8
            
            if (*(eax_4 + 4) == 0x1d)
                sub_55a500()
                eax_4 = data_1151ad8
            
            if (*(eax_4 + 4) == 0x22)
                sub_4b3cd0()
            
            int32_t* ecx_2 = data_1150ef0
            int32_t result_1
            float var_a4
            int128_t var_a0
            void* ThreadLocalStoragePointer
            
            if (ecx_2 != 0 && data_1151aec != 1)
                sub_4c0470(ecx_2, (zx.o(0)).d, (zx.o(0)).d)
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            else if (data_1150ef4 == 0 || data_1151aec != 1)
                result_1 = 0xffc0c0c0
                data_aca230 = result_1
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            else
                ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                void* esi_1 = *ThreadLocalStoragePointer
                
                if (data_15167a0 s> *(esi_1 + 4))
                    __Init_thread_header(&data_15167a0)
                    
                    if (data_15167a0 == 0xffffffff)
                        int32_t var_8_1 = 0
                        data_15167a4 = sub_4d0b50("sys/skybox.material", 5)
                        int32_t var_8_2 = 0xffffffff
                        __Init_thread_footer(&data_15167a0)
                
                if (data_15167a8 s> *(esi_1 + 4))
                    __Init_thread_header(&data_15167a8)
                    
                    if (data_15167a8 == 0xffffffff)
                        int32_t var_8_3 = 1
                        data_15167ac = sub_4d0b50("sys/skybox.structure", 2)
                        int32_t var_8_4 = 0xffffffff
                        __Init_thread_footer(&data_15167a8)
                
                int32_t eax_9 = data_1151b14
                int32_t* ecx_3 = data_15167ac
                int32_t var_c0_1 = data_1150ef4
                var_a0 = data_5d2b78
                var_a4 = 10f
                int64_t var_90_1 = data_1151b0c.q
                int32_t var_88_1 = eax_9
                sub_495460(eax_9, &var_a4, ecx_3, data_15167a4, var_c0_1, 0)
            
            sub_492260(0x3e9)
            
            if (data_1151aec == 1 && *(data_1151ad0 + 0x84) != 0)
                void* esi_2 = *ThreadLocalStoragePointer
                
                if (data_15167b0 s> *(esi_2 + 4))
                    __Init_thread_header(&data_15167b0)
                    
                    if (data_15167b0 == 0xffffffff)
                        int32_t var_8_5 = 2
                        data_15167b4 = sub_4d0b50("sys/particle_3d.material", 5)
                        int32_t var_8_6 = 0xffffffff
                        __Init_thread_footer(&data_15167b0)
                
                if (data_15167b8 s> *(esi_2 + 4))
                    __Init_thread_header(&data_15167b8)
                    
                    if (data_15167b8 == 0xffffffff)
                        int32_t var_8_7 = 3
                        data_15167bc = sub_4d0b50("sys/holodeck.texture", 3)
                        int32_t var_8_8 = 0xffffffff
                        __Init_thread_footer(&data_15167b8)
                
                __builtin_memcpy(&var_4c:8, 
                    "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\xbf\x00\x"
                "00\x00\x00\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80"
                "3f\x00\x00\x00\x00", 
                    0x30)
                var_a4 = 4f
                int32_t var_88_2 = 0
                int128_t var_6c
                __builtin_memcpy(&var_6c, 
                    "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00", 
                    0x20)
                var_a0 = data_5d2b78
                int64_t var_90_2 = 0
                sub_493bf0(sub_495590(0f, &var_4c:8, &var_a4, 4), &var_6c, &var_4c:8, &data_63c284, 
                    data_15167bc, data_15167b4)
            
            sub_492260(0)
            int32_t* eax_17 = sub_4dc100()
            
            if (*(data_1151ad8 + 4) != 0x22)
                void* esi_3 = nullptr
                void* eax_19
                
                while (true)
                    void* ecx_7
                    
                    if (esi_3 != 0)
                        ecx_7 = *eax_17
                        esi_3 += 0x6c
                    else
                        esi_3 = *eax_17
                        ecx_7 = esi_3
                    
                    eax_19 = eax_17[1] * 0x6c + ecx_7
                    
                    if (esi_3 u>= eax_19)
                        break
                    
                    while ((*(esi_3 + 0x68) & 0xffff0000) == 0)
                        esi_3 += 0x6c
                        
                        if (esi_3 u>= eax_19)
                            goto label_51a0c0
                    
                    void* var_bc_2 = ecx_7
                    sub_4954c0(esi_3, data_1151b88)
                
            label_51a0c0:
                void* esi_4 = data_1151ad8
                void* edi_2 = data_114e818
                
                if (*(esi_4 + 4) == 0x18)
                    if (edi_2 == 0)
                        sub_489550(eax_19, &data_5b2591, "gpGameData", 
                            "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t* eax_20 = *(edi_2 + 0xc)
                    result_1 = 0
                    int32_t edx_5
                    eax_19, edx_5 = sub_4fcd30(eax_20, &result_1)
                    
                    if (eax_19.b != 0)
                        do
                            int32_t* result_3 = result_1
                            sub_4fa2b0(eax_19, edx_5, result_3, &data_63c264)
                            
                            if ((0x8000 & GetKeyState(0x57)) != 0)
                                void* eax_22
                                eax_22.b = *(data_aca1f0 + 0x18)
                                
                                if (eax_22.b != 0)
                                    HWND eax_23
                                    int32_t edx_6
                                    eax_23, edx_6 = GetFocus()
                                    
                                    if (eax_23 == data_1150b8c || eax_23 == 0)
                                        if (data_15167c0 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                                            edx_6 = __Init_thread_header(&data_15167c0)
                                            
                                            if (data_15167c0 == 0xffffffff)
                                                int32_t var_8_9 = 4
                                                data_15167c4 =
                                                    sub_4d0b50("sys/SpriteWireFrame.material", 5)
                                                int32_t var_8_10 = 0xffffffff
                                                edx_6 = __Init_thread_footer(&data_15167c0)
                                        
                                        int32_t eax_27 = data_15167c4
                                        result_3[0x21] = eax_27
                                        sub_4fa2b0(eax_27, edx_6, result_3, &data_63c264)
                                        result_3[0x21] = 0
                            
                            eax_19, edx_5 = sub_4fcd30(eax_20, &result_1)
                        while (eax_19.b != 0)
                        
                        esi_4 = data_1151ad8
                        edi_2 = data_114e818
                
                if (*(esi_4 + 4) == 0x19)
                    if (edi_2 == 0)
                        sub_489550(eax_19, &data_5b2591, "gpGameData", 
                            "d:\ax\trunk\ax2017\engine\game.h", 0x45, "GetGameData")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_489700()
                        noreturn
                    
                    int32_t* edi_4 = *(edi_2 + 0x10)
                    void* esi_5 = nullptr
                    
                    while (true)
                        void* ecx_14
                        
                        if (esi_5 != 0)
                            ecx_14 = *edi_4
                            esi_5 += 0x7c
                        else
                            esi_5 = *edi_4
                            ecx_14 = esi_5
                        
                        void* eax_29 = edi_4[1] * 0x7c + ecx_14
                        
                        if (esi_5 u>= eax_29)
                            break
                        
                        while (true)
                            if ((*(esi_5 + 0x78) & 0xffff0000) != 0)
                                if (*(esi_5 + 0x20) == 1)
                                    break
                                
                                sub_506ab0(esi_5, &data_63c264)
                                break
                            
                            esi_5 += 0x7c
                            
                            if (esi_5 u>= eax_29)
                                goto label_51a254
            
        label_51a254:
            result = data_1151aec
            
            if (result == 1 || result == 2)
                result = sub_545670()
                
                if (data_1151aec == 2)
                    void* eax_30 = data_1151ad8
                    
                    if (eax_30 != 0 && *(eax_30 + 4) == 0x12)
                        var_a0 = data_60cbd0
                        sub_4c0580(&var_a0:0xc, &data_5d2474)
                        int32_t eax_31
                        int32_t ecx_17
                        eax_31, ecx_17 = sub_48a2c0(&result_1, 
                            "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!")
                        int32_t var_bc_5 = ecx_17
                        int32_t var_8_11 = 5
                        int32_t var_bc_6 = 0x3f800000
                        sub_4eaa00(eax_31, &var_a0:0xc, &result_1, data_1151ad8, 0xff000000, 0, 4)
                        int32_t var_8_12 = 6
                        
                        if (data_aca1f4 != 0)
                            int32_t result_2 = result_1
                            
                            if (result_2 != 0 && *result_2 != 0)
                                char* eax_32 = sub_48a080(&result_1)
                                int32_t temp0_1 = *(eax_32 + 4)
                                *(eax_32 + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    sub_4984f0(eax_32, *(eax_32 + 0xc) + 0x10)
                        
                        int32_t var_8_13 = 0xffffffff
                        var_a0 = data_60cbf0
                        sub_4c0580(&var_a0:0xc, &data_5d2460)
                        int32_t eax_33
                        int32_t ecx_23
                        eax_33, ecx_23 = sub_48a2c0(&result_1, 
                            "Grumpy wizards make toxic brew for the evil Queen and Jack.\r%$1234567890?!")
                        int32_t var_bc_7 = ecx_23
                        int32_t var_8_14 = 7
                        int32_t var_bc_8 = 0x3f800000
                        result =
                            sub_4eaa00(eax_33, &var_a0:0xc, &result_1, data_1151ad8, 0xffffffff, 0, 4)
                        int32_t var_8_15 = 8
                        
                        if (data_aca1f4 != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_48a080(&result_1)
                                int32_t temp1_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    result = sub_4984f0(result, *(result + 0xc) + 0x10)
                        
                        int32_t var_8_16 = 0xffffffff
                    
                    if (eax_30 == 0 || *(eax_30 + 4) != 0x12 || data_1151aec == 2)
                        result = data_114ec70
                        __builtin_memcpy(result + 0xa4, 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x80\x3f\x00", 
                            0x41)
                        *(result + 0x25c) = 0
                        sub_496580()
        else
            result = sub_54b4c0()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
