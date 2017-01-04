#ifndef _READ_STATS_H
#define _READ_STATS_H 1

#include <string>
#include <vector>
#include "annotation.hpp"

using namespace std;

unsigned long int count_mapped_reads(const string& bam_file_path, const vector<bool>& interesting_contigs);

void estimate_mate_gap_distribution(const string& bam_file_path, float& mate_gap_mean, float& mate_gap_stddev, const gene_annotation_index_t& gene_annotation_index, const exon_annotation_index_t& exon_annotation_index, const unsigned int sample_size);

#endif /* _READ_STATS_H */
