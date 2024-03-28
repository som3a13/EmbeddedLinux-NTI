################################################################################
#
# simpleapp package
#
################################################################################

SIMPLEAPP_VERSION = 1.0
SIMPLEAPP_SITE = package/simpleapp/src
SIMPLEAPP_SITE_METHOD = local# Other methods like git,wget,scp,file etc. are also available.

define SIMPLEAPP_BUILD_CMDS
    $(MAKE) CC="$(TARGET_CC)" LD="$(TARGET_LD)" -C $(@D)
endef

define SIMPLEAPP_INSTALL_TARGET_CMDS
    $(INSTALL) -D -m 0755 $(@D)/simpleapp  $(TARGET_DIR)/usr/bin
endef

$(eval $(generic-package))

