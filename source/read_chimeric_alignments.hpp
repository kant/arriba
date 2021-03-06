#ifndef _READ_CHIMERIC_ALIGNMENTS_H
#define _READ_CHIMERIC_ALIGNMENTS_H 1

#include <string>
#include "common.hpp"
#include "read_stats.hpp"

using namespace std;

unsigned int read_chimeric_alignments(const string& bam_file_path, const string& assembly_file_path, chimeric_alignments_t& chimeric_alignments, unsigned long int& mapped_reads, coverage_t& coverage, contigs_t& contigs, const contigs_t& interesting_contigs, const gene_annotation_index_t& gene_annotation_index, const bool separate_chimeric_bam_file, const bool is_rna_bam_file);

void assign_strands_from_strandedness(chimeric_alignments_t& chimeric_alignments, const strandedness_t strandedness);

#endif /* _READ_CHIMERIC_ALIGNMENTS_H */

