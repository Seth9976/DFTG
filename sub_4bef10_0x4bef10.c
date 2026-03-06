// 函数名称: sub_4bef10
// 虚拟地址: 0x4bef10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

float __convention("regparm")sub_4bef10(int32_t arg1, float* arg2, int32_t* arg3, int32_t* arg4, char arg5, int32_t* arg6, int32_t* arg7)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_59f918
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t esi
    int32_t var_94 = esi
    int32_t edi
    int32_t var_98 = edi
    int32_t var_9c = eax_2
    int32_t* esp = &var_9c
    fsbase->NtTib.ExceptionList = &ExceptionList
    float* var_64 = arg2
    int32_t* ecx = arg7
    int32_t* var_58 = arg6
    void* eax_4 = data_114ec70
    float result
    int32_t* var_a0
    float var_70
    void* var_68
    int64_t var_54
    
    if (*(eax_4 + 0xe7) != 0)
        if (arg5 != 0)
            var_a0 = "SpriteDrawVerts"
            sub_489550(eax_4, &data_5b2591, "!hasFourColors", "d:\ax\trunk\ax2017\engine\sprite.cpp", 
                0x11e, var_a0)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        float xmm1_1 = *(eax_4 + 0xec)
        int32_t i = 0
        float xmm0_2 = *(eax_4 + 0xe8) * xmm1_1
        var_68 = &var_54:4
        float xmm3_1 = 1f / xmm0_2
        int64_t var_78
        var_78:4.d = xmm3_1
        int32_t* ecx_1
        
        do
            float xmm0_4 = arg3[i * 2] f* xmm3_1
            var_70 = xmm0_4
            *(var_68 - 4) = sub_41f120(xmm0_4) f* *(data_114ec70 + 0xe8)
            float xmm0_8 = sub_41f100(var_70)
            ecx_1 = data_114ec70
            void* eax_7 = var_68
            xmm3_1 = var_78:4.d
            *eax_7 = xmm0_8 f* ecx_1[0x3a]
            float xmm0_10 = arg3[i * 2 + 1]
            i += 1
            *(eax_7 + 4) = (xmm0_10 * 1f / xmm1_1) ^ (data_60cca0.o).d
            var_68 = eax_7 + 0xc
        while (i s< 4)
        
        int32_t* eax_9 = ecx
        
        if (eax_9 == 0)
            eax_9 = ecx_1[0x97]
            
            if (eax_9 == 0)
                ecx_1 = *fsbase->ThreadLocalStoragePointer
                
                if (data_15163f8 s> ecx_1[1])
                    var_a0 = &data_15163f8
                    ecx_1 = __Init_thread_header(var_a0)
                    
                    if (data_15163f8 == 0xffffffff)
                        int32_t var_14_1 = 0
                        int32_t* eax_12 = sub_4d0b50("sys/sprite_3d.material", 5)
                        var_a0 = &data_15163f8
                        data_15163fc = eax_12
                        int32_t var_14_2 = 0xffffffff
                        ecx_1 = __Init_thread_footer(var_a0)
                
                eax_9 = data_15163fc
        
        int64_t var_30
        float xmm3_3 = var_54.d f+ var_30.d
        float xmm2_3 = var_30:4.d f+ var_54:4.d
        var_a0 = eax_9
        float var_4c
        float var_28
        float xmm1_4 = (var_28 + var_4c) * 0.5f
        result = sub_493420(xmm1_4, var_64, &var_54, arg4, 0, 
            _mm_unpacklo_ps(xmm3_3 * 0.5f, xmm2_3 * 0.5f), xmm1_4, var_58, ecx_1)
        esp = &var_9c
    else
        int64_t var_48
        
        if (*(eax_4 + 0xe4) == 0)
            void* eax_26 = sub_4f5710(1)
            void* edi_2 = data_114e814
            
            if (*(edi_2 + 0x1d) == 0)
                var_a0 = "SpriteDrawVerts"
                sub_489550(eax_26, &data_5b2591, "gpSpriteAppData->spritesDrawing", 
                    "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x156, var_a0)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            int32_t* ecx_5 = var_58
            
            if (ecx_5 != 0)
                var_a0 = ecx_5
                char eax_28 = sub_4d2e00(&var_48:4, var_64, ecx_5, &var_48:4)
                ecx_5 = var_58
                esp = &var_9c
                
                if (eax_28 != 0)
                    var_64 = &var_48:4
                    ecx_5 = *(*sub_48f5c0(ecx_5) + 0x28)
                    var_58 = ecx_5
                
                edi_2 = data_114e814
            
            int32_t* eax_44 = *(edi_2 + 0x18)
            
            if (eax_44 == 0 || eax_44 == 0x400)
            label_4bf647:
                sub_4bed10()
                edi_2 = data_114e814
                *(edi_2 + 0x4c) = var_58
                eax_44 = ecx
                *(edi_2 + 0x50) = eax_44
            else if (*(edi_2 + 0x4c) != ecx_5 || *(edi_2 + 0x50) != ecx)
                void* eax_31 = data_114ec70
                *(eax_31 + 0x30) += 1
                void* eax_32 = data_114e818
                
                if (eax_32 != 0 && ((*(eax_32 + 0x1c) u>> 8).b & 1) != 0)
                    void* eax_35 = *(edi_2 + 0x50)
                    
                    if (eax_35 == ecx)
                        void* esi_5 = *(edi_2 + 0x4c)
                        
                        if (esi_5 == 0 || ecx_5 == 0)
                            var_a0 = "Texture Swap with null"
                            sub_4892e0(var_a0)
                            esp = &var_9c
                        else
                            char* eax_41 = ecx_5[8]
                            char* const edx_7 = &data_5b2591
                            char* const ecx_13 = &data_5b2591
                            
                            if (eax_41 != 0)
                                edx_7 = eax_41
                            
                            char* eax_42 = *(esi_5 + 0x20)
                            var_a0 = edx_7
                            
                            if (eax_42 != 0)
                                ecx_13 = eax_42
                            
                            char* const var_a4_5 = ecx_13
                            sub_4892e0("Texture Swap: %s %s")
                            esp = &var_9c
                    else
                        var_68 = &data_5b2591
                        int32_t var_14_5 = 2
                        var_70 = &data_5b2591
                        var_14_5.b = 3
                        int32_t* ecx_6 = &var_68
                        
                        if (eax_35 == 0)
                            var_a0 = "Default"
                            sub_48a5e0(ecx_6, var_a0)
                        else
                            var_a0 = eax_35 + 0x20
                            sub_48a560(ecx_6, var_a0)
                        
                        int32_t* ecx_7 = &var_70
                        
                        if (ecx == 0)
                            var_a0 = "Default"
                            sub_48a5e0(ecx_7, var_a0)
                        else
                            var_a0 = &ecx[8]
                            sub_48a560(ecx_7, var_a0)
                        
                        int32_t* esi_4 = var_70
                        int32_t* ecx_8 = &data_5b2591
                        void* edi_3 = var_68
                        char* const eax_38 = &data_5b2591
                        
                        if (esi_4 != 0)
                            ecx_8 = esi_4
                        
                        var_a0 = ecx_8
                        
                        if (edi_3 != 0)
                            eax_38 = edi_3
                        
                        char* const var_a4_4 = eax_38
                        sub_4892e0("Material change: %s to  %s")
                        esp = &var_9c
                        var_14_5.b = 4
                        
                        if (data_aca1f4 != 0 && esi_4 != 0 && *esi_4 != 0)
                            char* eax_39 = sub_48a080(&var_70)
                            int32_t temp0_1 = *(eax_39 + 4)
                            *(eax_39 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_4984f0(eax_39, *(eax_39 + 0xc) + 0x10)
                                var_70 = &data_5b2591
                        
                        int32_t var_14_6 = 5
                        
                        if (data_aca1f4 != 0 && edi_3 != 0 && *edi_3 != 0)
                            char* eax_40 = sub_48a080(&var_68)
                            int32_t temp1_1 = *(eax_40 + 4)
                            *(eax_40 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_4984f0(eax_40, *(eax_40 + 0xc) + 0x10)
                                var_68 = &data_5b2591
                        
                        int32_t var_14_7 = 0xffffffff
                
                goto label_4bf647
            
            int32_t esi_6 = *(edi_2 + 0x3c)
            
            if (esi_6 == 0)
                if (*(edi_2 + 0x18) != esi_6)
                    var_a0 = "SpriteDrawVerts"
                    sub_489550(eax_44, &data_5b2591, "gpSpriteAppData->numBufferSprites == 0", 
                        "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x1ae, var_a0)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                void* edx_8 = *data_114ec78
                var_a0 = *(edi_2 + (*(edi_2 + 0x10) << 2))
                uint32_t (* eax_47)[0x4] = (*(edx_8 + 0x60))(var_a0)
                edi_2 = data_114e814
                *(edi_2 + 0x3c) = eax_47
                _memset(eax_47, esi_6.b, 0x18000)
                esi_6 = *(edi_2 + 0x3c)
                esp = &var_a0
            
            int32_t edi_5 = *(edi_2 + 0x18) * 0x60
            
            if (arg5 != 0)
                bool cond:0_1 = data_114ec74 != 1
                *(edi_5 + esi_6) = *arg3
                *(edi_5 + esi_6 + 4) = arg3[1]
                *(edi_5 + esi_6 + 8) = *var_64
                *(edi_5 + esi_6 + 0xc) = var_64[1]
                
                if (cond:0_1)
                    int32_t ecx_42 = *arg4
                    *(edi_5 + esi_6 + 0x10) = (((((ecx_42 u>> 0x18 << 8) + zx.d(ecx_42.b)) << 8)
                        + zx.d((ecx_42 u>> 8).b)) << 8) + zx.d((ecx_42 u>> 0x10).b)
                    int32_t ecx_44 = arg4[1]
                    *(edi_5 + esi_6 + 0x14) = (((((ecx_44 u>> 0x18 << 8) + zx.d(ecx_44.b)) << 8)
                        + zx.d((ecx_44 u>> 8).b)) << 8) + zx.d((ecx_44 u>> 0x10).b)
                else
                    int32_t edx_23 = *arg4
                    *(edi_5 + esi_6 + 0x10) = ((((zx.d((edx_23 u>> 0x10).b) + (edx_23 u>> 0x18 << 8))
                        << 8) + zx.d((edx_23 u>> 8).b)) << 8) + zx.d(edx_23.b)
                    int32_t edx_24 = arg4[1]
                    *(edi_5 + esi_6 + 0x14) = ((((zx.d((edx_24 u>> 0x10).b) + (edx_24 u>> 0x18 << 8))
                        << 8) + zx.d((edx_24 u>> 8).b)) << 8) + zx.d(edx_24.b)
                
                bool cond:2_1 = data_114ec74 != 1
                uint32_t edx_41 = zx.d(arg5)
                *(edi_5 + esi_6 + 0x18) = arg3[2]
                *(edi_5 + esi_6 + 0x1c) = arg3[3]
                *(edi_5 + esi_6 + 0x20) = var_64[2]
                *(edi_5 + esi_6 + 0x24) = var_64[3]
                
                if (cond:2_1)
                    int32_t ecx_61 = arg4[edx_41 * 2]
                    *(edi_5 + esi_6 + 0x28) = (((((ecx_61 u>> 0x18 << 8) + zx.d(ecx_61.b)) << 8)
                        + zx.d((ecx_61 u>> 8).b)) << 8) + zx.d((ecx_61 u>> 0x10).b)
                    int32_t ecx_64 = arg4[edx_41 * 2 + 1]
                    *(edi_5 + esi_6 + 0x2c) = (((((ecx_64 u>> 0x18 << 8) + zx.d(ecx_64.b)) << 8)
                        + zx.d((ecx_64 u>> 8).b)) << 8) + zx.d((ecx_64 u>> 0x10).b)
                else
                    int32_t edx_42 = arg4[edx_41 * 2]
                    *(edi_5 + esi_6 + 0x28) = ((((zx.d((edx_42 u>> 0x10).b) + (edx_42 u>> 0x18 << 8))
                        << 8) + zx.d((edx_42 u>> 8).b)) << 8) + zx.d(edx_42.b)
                    int32_t edx_43 = arg4[edx_41 * 2 + 1]
                    *(edi_5 + esi_6 + 0x2c) = ((((zx.d((edx_43 u>> 0x10).b) + (edx_43 u>> 0x18 << 8))
                        << 8) + zx.d((edx_43 u>> 8).b)) << 8) + zx.d(edx_43.b)
                
                bool cond:3_1 = data_114ec74 != 1
                *(edi_5 + esi_6 + 0x30) = arg3[4]
                *(edi_5 + esi_6 + 0x34) = arg3[5]
                *(edi_5 + esi_6 + 0x38) = var_64[4]
                *(edi_5 + esi_6 + 0x3c) = var_64[5]
                
                if (cond:3_1)
                    int32_t ecx_82 = arg4[edx_41 * 2 + 2]
                    *(edi_5 + esi_6 + 0x40) = (((((ecx_82 u>> 0x18 << 8) + zx.d(ecx_82.b)) << 8)
                        + zx.d((ecx_82 u>> 8).b)) << 8) + zx.d((ecx_82 u>> 0x10).b)
                    int32_t ecx_85 = arg4[edx_41 * 2 + 3]
                    *(edi_5 + esi_6 + 0x44) = (((((ecx_85 u>> 0x18 << 8) + zx.d(ecx_85.b)) << 8)
                        + zx.d((ecx_85 u>> 8).b)) << 8) + zx.d((ecx_85 u>> 0x10).b)
                else
                    int32_t edx_60 = arg4[edx_41 * 2 + 2]
                    *(edi_5 + esi_6 + 0x40) = ((((zx.d((edx_60 u>> 0x10).b) + (edx_60 u>> 0x18 << 8))
                        << 8) + zx.d((edx_60 u>> 8).b)) << 8) + zx.d(edx_60.b)
                    int32_t edx_61 = arg4[edx_41 * 2 + 3]
                    *(edi_5 + esi_6 + 0x44) = ((((zx.d((edx_61 u>> 0x10).b) + (edx_61 u>> 0x18 << 8))
                        << 8) + zx.d((edx_61 u>> 8).b)) << 8) + zx.d(edx_61.b)
                
                bool cond:4_1 = data_114ec74 != 1
                *(edi_5 + esi_6 + 0x48) = arg3[6]
                *(edi_5 + esi_6 + 0x4c) = arg3[7]
                *(edi_5 + esi_6 + 0x50) = var_64[6]
                *(edi_5 + esi_6 + 0x54) = var_64[7]
                
                if (cond:4_1)
                    int32_t ecx_103 = arg4[edx_41 * 2 + 4]
                    *(edi_5 + esi_6 + 0x58) = (((((ecx_103 u>> 0x18 << 8) + zx.d(ecx_103.b)) << 8)
                        + zx.d((ecx_103 u>> 8).b)) << 8) + zx.d((ecx_103 u>> 0x10).b)
                    int32_t ecx_106 = arg4[edx_41 * 2 + 5]
                    *(edi_5 + esi_6 + 0x5c) = (((((ecx_106 u>> 0x18 << 8) + zx.d(ecx_106.b)) << 8)
                        + zx.d((ecx_106 u>> 8).b)) << 8) + zx.d((ecx_106 u>> 0x10).b)
                else
                    int32_t edx_78 = arg4[edx_41 * 2 + 4]
                    *(edi_5 + esi_6 + 0x58) = ((((zx.d((edx_78 u>> 0x10).b) + (edx_78 u>> 0x18 << 8))
                        << 8) + zx.d((edx_78 u>> 8).b)) << 8) + zx.d(edx_78.b)
                    int32_t edx_79 = arg4[edx_41 * 2 + 5]
                    *(edi_5 + esi_6 + 0x5c) = ((((zx.d((edx_79 u>> 0x10).b) + (edx_79 u>> 0x18 << 8))
                        << 8) + zx.d((edx_79 u>> 8).b)) << 8) + zx.d(edx_79.b)
            else
                int32_t edx_9 = *arg4
                int32_t eax_50 = arg4[1]
                uint8_t eax_68
                uint32_t ecx_20
                uint32_t edx_13
                
                if (data_114ec74 != 1)
                    ecx_20 = (((((edx_9 u>> 0x18 << 8) + zx.d(edx_9.b)) << 8) + zx.d((edx_9 u>> 8).b))
                        << 8) + zx.d((edx_9 u>> 0x10).b)
                    edx_13 = (((eax_50 u>> 0x18 << 8) + zx.d(eax_50.b)) << 8) + zx.d((eax_50 u>> 8).b)
                    eax_68 = (eax_50 u>> 0x10).b
                else
                    ecx_20 = ((((zx.d((edx_9 u>> 0x10).b) + (edx_9 u>> 0x18 << 8)) << 8)
                        + zx.d((edx_9 u>> 8).b)) << 8) + zx.d(edx_9.b)
                    edx_13 = ((zx.d((eax_50 u>> 0x10).b) + (eax_50 u>> 0x18 << 8)) << 8)
                        + zx.d((eax_50 u>> 8).b)
                    eax_68 = eax_50.b
                
                uint32_t edx_21 = (edx_13 << 8) + zx.d(eax_68)
                *(edi_5 + esi_6) = *arg3
                *(edi_5 + esi_6 + 4) = arg3[1]
                *(edi_5 + esi_6 + 8) = *var_64
                *(edi_5 + esi_6 + 0xc) = var_64[1]
                *(edi_5 + esi_6 + 0x10) = ecx_20
                *(edi_5 + esi_6 + 0x14) = edx_21
                *(edi_5 + esi_6 + 0x18) = arg3[2]
                *(edi_5 + esi_6 + 0x1c) = arg3[3]
                *(edi_5 + esi_6 + 0x20) = var_64[2]
                *(edi_5 + esi_6 + 0x24) = var_64[3]
                *(edi_5 + esi_6 + 0x28) = ecx_20
                *(edi_5 + esi_6 + 0x2c) = edx_21
                *(edi_5 + esi_6 + 0x30) = arg3[4]
                *(edi_5 + esi_6 + 0x34) = arg3[5]
                *(edi_5 + esi_6 + 0x38) = var_64[4]
                *(edi_5 + esi_6 + 0x3c) = var_64[5]
                *(edi_5 + esi_6 + 0x40) = ecx_20
                *(edi_5 + esi_6 + 0x44) = edx_21
                *(edi_5 + esi_6 + 0x48) = arg3[6]
                *(edi_5 + esi_6 + 0x4c) = arg3[7]
                *(edi_5 + esi_6 + 0x50) = var_64[6]
                *(edi_5 + esi_6 + 0x54) = var_64[7]
                *(edi_5 + esi_6 + 0x58) = ecx_20
                *(edi_5 + esi_6 + 0x5c) = edx_21
            
            void* eax_254 = data_114e814
            *(eax_254 + 0x18) += 1
            result = data_114ec70
            *(result i+ 0x28) += 1
        else
            float xmm0_13 = *(eax_4 + 0xa4)
            float xmm5_1 = *arg3
            float xmm4_1 = arg3[1]
            float xmm1_6 = *(eax_4 + 0xac) * 0f
            float xmm0_16 = *(eax_4 + 0xb4)
            float xmm6_2 = *(eax_4 + 0xbc) * 0f
            float xmm7_2 = *(eax_4 + 0xcc) * 0f
            float xmm4_2 = xmm4_1 f* *(eax_4 + 0xc8)
            float xmm3_10[0x4] =
                xmm5_1 * xmm0_13 + xmm4_1 f* *(eax_4 + 0xa8) + xmm1_6 f+ *(eax_4 + 0xb0)
            float xmm1_9 = xmm5_1 * xmm0_16 + xmm4_1 f* *(eax_4 + 0xb8)
            float xmm2_5 = arg3[3]
            float xmm0_19 = *(eax_4 + 0xc4)
            var_68 = xmm6_2
            float xmm6_3 = *(eax_4 + 0xd0)
            var_54 = _mm_unpacklo_ps(xmm3_10, xmm1_9 + xmm6_2 f+ *(eax_4 + 0xc0))
            float xmm3_12 = arg3[2]
            void* eax_16 = data_114ec70
            float xmm5_6 = *(eax_16 + 0xc0)
            float xmm2_7 = arg3[5]
            float xmm3_16 = xmm3_12 * xmm0_19 + xmm2_5 f* *(eax_16 + 0xc8) + xmm7_2 + xmm6_3
            float xmm3_17 = arg3[4]
            var_48 = _mm_unpacklo_ps(
                xmm3_12 * xmm0_13 + xmm2_5 f* *(eax_16 + 0xa8) + xmm1_6 f+ *(eax_16 + 0xb0), 
                xmm3_12 * xmm0_16 + xmm2_5 f* *(eax_16 + 0xb8) f+ var_68 + xmm5_6)
            float var_40_1 = xmm3_16
            void* eax_18 = data_114ec70
            float xmm0_28 = arg3[6]
            float xmm3_21 = xmm3_17 * xmm0_19 + xmm2_7 f* *(eax_18 + 0xc8) + xmm7_2 + xmm6_3
            int64_t xmm4_14 = _mm_unpacklo_ps(
                xmm3_17 * xmm0_13 + xmm2_7 f* *(eax_18 + 0xa8) + xmm1_6 f+ *(eax_18 + 0xb0), 
                xmm3_17 * xmm0_16 + xmm2_7 f* *(eax_18 + 0xb8) f+ var_68 + xmm5_6)
            float xmm1_22 = arg3[7]
            void* esi_2 = data_114ec70
            int64_t var_3c_1 = xmm4_14
            float var_34_1 = xmm3_21
            float xmm3_26[0x4] =
                xmm0_13 * xmm0_28 + *(esi_2 + 0xa8) * xmm1_22 + xmm1_6 f+ *(esi_2 + 0xb0)
            int64_t xmm4_19 = xmm0_16 * xmm0_28 + *(esi_2 + 0xb8) * xmm1_22 f+ var_68 + xmm5_6
            int64_t var_78_2 = xmm3_26
            int32_t var_5c_2 = xmm4_19
            float xmm2_17 = xmm0_19 * xmm0_28 + *(esi_2 + 0xc8) * xmm1_22 + xmm7_2 + xmm6_3
            int64_t var_30_1 = _mm_unpacklo_ps(xmm3_26, xmm4_19)
            float var_28_1 = xmm2_17
            
            if (ecx == 0)
                ecx = *(esi_2 + 0x25c)
                
                if (ecx == 0)
                    if (data_1516400 s> *(*fsbase->ThreadLocalStoragePointer + 4))
                        var_a0 = &data_1516400
                        __Init_thread_header(var_a0)
                        
                        if (data_1516400 == 0xffffffff)
                            int32_t var_14_3 = 1
                            int32_t* eax_23 = sub_4d0b50("sys/sprite_3d.material", 5)
                            var_a0 = &data_1516400
                            data_1516404 = eax_23
                            int32_t var_14_4 = 0xffffffff
                            __Init_thread_footer(var_a0)
                        
                        arg2 = var_64
                        xmm4_19 = var_5c_2
                        xmm3_26 = zx.o(var_78_2)
                    
                    ecx = data_1516404
            
            float xmm3_27 = xmm3_26 f+ var_54.d
            float xmm4_20 = xmm4_19 f+ var_54:4.d
            var_a0 = ecx
            float xmm2_19 = (xmm2_17 + xmm5_1 * xmm0_19 + xmm4_2 + xmm7_2 + xmm6_3) * 0.5f
            result = sub_493420(xmm2_19, arg2, &var_54, arg4, arg5, 
                _mm_unpacklo_ps(xmm3_27 * 0.5f, xmm4_20 * 0.5f), xmm2_19, var_58, ecx)
            esp = &var_9c
    fsbase->NtTib.ExceptionList = ExceptionList
    esp[1]
    esp[2]
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
