modules_add_contextual_data_tests_TESTS                   =       \
        modules/add-contextual-data/tests/test_context_info_db

check_PROGRAMS                                  +=      \
        ${modules_add_contextual_data_tests_TESTS}

modules_add_contextual_data_tests_test_context_info_db_CFLAGS   =       \
        $(TEST_CFLAGS) -I$(top_srcdir)/modules/add-contextual-data
modules_add_contextual_data_tests_test_context_info_db_LDADD    =       \
        $(TEST_LDADD)
modules_add_contextual_data_tests_test_context_info_db_LDFLAGS  =       \
        $(PREOPEN_SYSLOGFORMAT)                         \
        -dlpreopen $(top_builddir)/modules/add-contextual-data/libadd-contextual-data.la
