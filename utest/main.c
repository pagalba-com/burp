#include <check.h>
#include <stdlib.h>
#include "test.h"

int main(void)
{
	int number_failed;
	SRunner *sr;

	sr=srunner_create(NULL);

	srunner_add_suite(sr, suite_alloc());
	srunner_add_suite(sr, suite_attribs());
	srunner_add_suite(sr, suite_base64());
	srunner_add_suite(sr, suite_cmd());
	srunner_add_suite(sr, suite_conf());
	srunner_add_suite(sr, suite_conffile());
	srunner_add_suite(sr, suite_fzp());
	srunner_add_suite(sr, suite_hexmap());
	srunner_add_suite(sr, suite_pathcmp());
	srunner_add_suite(sr, suite_protocol2_blist());
	srunner_add_suite(sr, suite_protocol2_rabin_rconf());
	srunner_add_suite(sr, suite_protocol2_rabin_win());
	srunner_add_suite(sr, suite_client_find());
	srunner_add_suite(sr, suite_server_manio());
	srunner_add_suite(sr, suite_server_resume());
	srunner_add_suite(sr, suite_server_sdirs());
	srunner_add_suite(sr, suite_server_protocol1_dpth());
	srunner_add_suite(sr, suite_server_protocol1_fdirs());
	srunner_add_suite(sr, suite_server_protocol2_backup_phase4());
	srunner_add_suite(sr, suite_server_protocol2_champ_chooser_candidate());
	srunner_add_suite(sr, suite_server_protocol2_champ_chooser_scores());
	srunner_add_suite(sr, suite_server_protocol2_champ_chooser_sparse());
	// Do these last, as they have slight delays.
	srunner_add_suite(sr, suite_server_protocol2_dpth());
	srunner_add_suite(sr, suite_lock());

	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return number_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}