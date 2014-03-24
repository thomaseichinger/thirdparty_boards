MODULE =$(BOARD)_base

.PHONY: $(BINDIR)iot-lab_M3_drivers.a

all: $(BINDIR)$(MODULE).a
	$(MAKE) -C drivers
ifneq (,$(findstring openwsn,$(USEMODULE)))
	$(MAKE) -C openwsn
endif

$(BINDIR)$(MODULE): $(OBJ)
	$(AR) rcs $(BINDIR)iot-lab_M3_base.a $(OBJ)

include $(RIOTBASE)/Makefile.base

